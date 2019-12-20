/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OsMonitore.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/15 17:33:18 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/15 17:36:39 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OSMONITORE
#define OSMONITORE

#include "IMonitorModule.hpp"
#include <sys/sysctl.h>
#include <sys/types.h>
#include <mach/mach.h>
#include <unistd.h>

class OsMonitore : public IMonitorModule {
	public:
	OsMonitore();
	virtual ~OsMonitore();
	virtual void updateData();
	virtual std::string getModuleName();

	OsMonitore(OsMonitore const &src);
	void operator=(OsMonitore const &rhs);
};

#endif