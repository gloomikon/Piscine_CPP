/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CpuMonitore.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/15 17:33:18 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/15 20:53:53 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPUMONITORE
#define CPUMONITORE

#include "IMonitorModule.hpp"
#include <sys/sysctl.h>
#include <sys/types.h>
#include <mach/mach.h>
#include <unistd.h>
#include <sstream>
#include <string>
#include <fstream>

class CpuMonitore : public IMonitorModule {
	public:
	CpuMonitore();
	virtual ~CpuMonitore();
	virtual void updateData();
	virtual std::string getModuleName();

	CpuMonitore(CpuMonitore const &src);
	void operator=(CpuMonitore const &rhs);
};

#endif