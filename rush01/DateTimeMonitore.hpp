/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DateTimeMonitore.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/15 17:33:18 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/15 17:45:20 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATETIMEMONITORE
#define DATETIMEMONITORE

#include "IMonitorModule.hpp"
#include <sys/sysctl.h>
#include <sys/types.h>
#include <mach/mach.h>
#include <unistd.h>

class DateTimeMonitore : public IMonitorModule {
	public:
	DateTimeMonitore();
	virtual ~DateTimeMonitore();
	virtual void updateData();
	virtual std::string getModuleName();

	DateTimeMonitore(DateTimeMonitore const &src);
	void operator=(DateTimeMonitore const &rhs);
};

#endif