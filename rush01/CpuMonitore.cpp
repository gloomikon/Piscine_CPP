/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CpuMonitore.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/15 17:34:11 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/15 23:31:00 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CpuMonitore.hpp"

CpuMonitore::CpuMonitore()
{
	this->active = true;
}

CpuMonitore::~CpuMonitore() {}

void CpuMonitore::updateData()
{
	if (!this->active)
	{
		this->data = "Disabled";
		return;
	}
	size_t len = 100;
	char str[100];
	std::string cpuName;
	int ncpu;

	sysctlbyname("machdep.cpu.brand_string", &str, &len, NULL, 0);
	cpuName = str;
	this->data = cpuName + " ";

	len = sizeof(int);
	sysctlbyname("hw.ncpu", &ncpu, &len, NULL, 0);
	this->data += std::to_string(ncpu) + " cores. ";

	std::system("top -l 1 | grep --line-buffered \"CPU usage:\" > test");
	std::ifstream nifs("test");
	std::string nline = "";

	getline(nifs, nline, '\0');
	this->data += "\n" + nline;
}

std::string CpuMonitore::getModuleName()
{
	return "CPU INFO";
}

CpuMonitore::CpuMonitore(CpuMonitore const &sqd)
{
	(void)sqd;
}

void CpuMonitore::operator=(CpuMonitore const &sqd)
{
	(void)sqd;
}