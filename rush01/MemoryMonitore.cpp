/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MemoryMonitore.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/15 17:34:11 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/15 23:31:55 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MemoryMonitore.hpp"

MemoryMonitore::MemoryMonitore()
{
	this->active = true;
}

MemoryMonitore::~MemoryMonitore() {}

void MemoryMonitore::updateData()
{
	if (!this->active)
	{
		this->data = "Disabled";
		return;
	}
	MemoryStat memoryStat;
	xsw_usage vmusage = {};
	size_t size = sizeof(vmusage);
	if (sysctlbyname("vm.swapusage", &vmusage, &size, NULL, 0) != 0)
	{
		return;
	}
	memoryStat.virt.total = vmusage.xsu_total;
	memoryStat.virt.avail = vmusage.xsu_avail;
	memoryStat.virt.used = vmusage.xsu_used;

	// Get Physical RAM Stats
	int mib[2];
	mib[0] = CTL_HW;
	mib[1] = HW_MEMSIZE;
	size_t length = sizeof(memoryStat.phys.total);
	sysctl(mib, 2, &memoryStat.phys.total, &length, NULL, 0);

	mach_msg_type_number_t count = HOST_VM_INFO_COUNT;
	vm_statistics_data_t vmstat;
	if (KERN_SUCCESS != host_statistics(mach_host_self(), HOST_VM_INFO, (host_info_t)&vmstat, &count))
	{
		return;
	}
	memoryStat.phys.avail = (int64_t)vmstat.free_count * (int64_t)vmusage.xsu_pagesize;
	memoryStat.phys.used = ((int64_t)vmstat.active_count +
							(int64_t)vmstat.inactive_count +
							(int64_t)vmstat.wire_count) *
						   (int64_t)vmusage.xsu_pagesize;

	struct task_basic_info t_info;
	mach_msg_type_number_t t_info_count = TASK_BASIC_INFO_COUNT;

	if (KERN_SUCCESS != task_info(mach_task_self(),
								  TASK_BASIC_INFO, (task_info_t)&t_info,
								  &t_info_count))
	{
		return;
	}
	memoryStat.virt.app = t_info.virtual_size;
	memoryStat.phys.app = t_info.resident_size;

	this->data = "Virtual memory: ";
	this->data += "Total: ";
	std::ostringstream stream;
	stream << std::fixed << std::setprecision(3) << static_cast<double>(memoryStat.virt.total) / 1073741824;
	std::string tmp = stream.str();
	this->data += tmp + " GB ";
	this->data += "Available: ";
	stream.str("");
	stream << std::fixed << std::setprecision(3) << static_cast<double>(memoryStat.virt.avail) / 1073741824;
	tmp = stream.str();
	this->data += tmp + " GB ";
	this->data += "Used: ";
	stream.str("");
	stream << std::fixed << std::setprecision(3) << static_cast<double>(memoryStat.virt.used) / 1073741824;
	tmp = stream.str();
	this->data += tmp + " GB ";

	this->data += "\nPhysical memory: ";
	this->data += "Total: ";
	stream.str("");
	stream << std::fixed << std::setprecision(3) << static_cast<double>(memoryStat.phys.total) / 1073741824;
	tmp = stream.str();
	this->data += tmp + " GB ";
	this->data += "Available: ";
	stream.str("");
	stream << std::fixed << std::setprecision(3) << static_cast<double>(memoryStat.phys.total - memoryStat.phys.used) / 1073741824;
	tmp = stream.str();
	this->data += tmp + " GB ";
	this->data += "Used: ";
	stream.str("");
	stream << std::fixed << std::setprecision(3) << static_cast<double>(memoryStat.phys.used) / 1073741824;
	tmp = stream.str();
	this->data += tmp + " GB ";
}

std::string MemoryMonitore::getModuleName()
{
	return "MEMORY";
}

MemoryMonitore::MemoryMonitore(MemoryMonitore const &sqd)
{
	(void)sqd;
}

void MemoryMonitore::operator=(MemoryMonitore const &sqd)
{
	(void)sqd;
}
