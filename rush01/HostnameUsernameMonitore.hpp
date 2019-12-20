/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HostnameUsernameMonitore.hpp                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/15 16:01:13 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/15 16:54:41 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HOSTNAMEUSERNAMEMONITORE
#define HOSTNAMEUSERNAMEMONITORE

#include "IMonitorModule.hpp"
#include <sys/sysctl.h>
#include <sys/types.h>
#include <mach/mach.h>
#include <unistd.h>
#include <pwd.h>

class HostnameUsernameMonitore : public IMonitorModule {
	public:
	HostnameUsernameMonitore();
	virtual ~HostnameUsernameMonitore();
	virtual void updateData();
	virtual std::string getModuleName();

	HostnameUsernameMonitore(HostnameUsernameMonitore const &src);
	void operator=(HostnameUsernameMonitore const &rhs);
};

#endif