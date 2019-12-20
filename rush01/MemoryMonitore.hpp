/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MemoryMonitore.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/15 17:33:18 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/15 21:44:52 by dsamarsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MEMORYMONITORE
#define MEMORYMONITORE

#include "IMonitorModule.hpp"
#include <sys/sysctl.h>
#include <sys/types.h>
#include <mach/mach.h>
#include <unistd.h>
#include <iomanip>
#include <sstream>

class MemoryMonitore : public IMonitorModule
{
public:
	MemoryMonitore();
	virtual ~MemoryMonitore();
	virtual void updateData();
	virtual std::string getModuleName();

	MemoryMonitore(MemoryMonitore const &src);
	void operator=(MemoryMonitore const &rhs);

private:
	struct MemoryStat
	{
		struct
		{
			unsigned long long total;
			unsigned long long avail;
			unsigned long long used;
			unsigned long long app;
		} virt;
		struct
		{
			unsigned long long total;
			unsigned long long avail;
			unsigned long long used;
			unsigned long long app;
		} phys;
	};
};

#endif
