/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HostnameUsernameMonitore.cpp                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/15 16:07:02 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/15 23:31:38 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HostnameUsernameMonitore.hpp"

HostnameUsernameMonitore::HostnameUsernameMonitore()
{
	this->active = true;
}

HostnameUsernameMonitore::~HostnameUsernameMonitore() {}

void HostnameUsernameMonitore::updateData()
{
	if (!this->active)
	{
		this->data = "Disabled";
		return;
	}
	size_t len;
	char str[1048];

	len = 1048;
	sysctlbyname("kern.hostname", str, &len, NULL, 0);
	struct passwd *pw;
	uid_t uid;
	uid = getuid();
	pw = getpwuid(uid);
	std::string username = "";
	if (pw)
	{
		username = pw->pw_name;
	}
	this->data = "HOSTNAME: " + std::string(str) + "\nUSERNAME: " + username;
}

std::string HostnameUsernameMonitore::getModuleName()
{
	return "HOSTNAME + USERNAME";
}

HostnameUsernameMonitore::HostnameUsernameMonitore(HostnameUsernameMonitore const &sqd)
{
	(void)sqd;
}

void HostnameUsernameMonitore::operator=(HostnameUsernameMonitore const &sqd)
{
	(void)sqd;
}