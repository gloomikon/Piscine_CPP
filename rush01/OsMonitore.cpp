/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OsMonitore.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/15 17:34:11 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/15 23:32:20 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "OsMonitore.hpp"

OsMonitore::OsMonitore()
{
	this->active = true;
}

OsMonitore::~OsMonitore() {}

void OsMonitore::updateData()
{
	if (!this->active)
	{
		this->data = "Disabled";
		return;
	}
	size_t len;
	char str[1048];

	len = 1048;
	sysctlbyname("kern.ostype", str, &len, NULL, 0);
	std::string osType = str;

	sysctlbyname("kern.osrelease", str, &len, NULL, 0);
	std::string osRelease = str;

	this->data = "OS TYPE: " + osType + " " + osRelease;
}

std::string OsMonitore::getModuleName()
{
	return "OS INFO";
}

OsMonitore::OsMonitore(OsMonitore const &sqd)
{
	(void)sqd;
}

void OsMonitore::operator=(OsMonitore const &sqd)
{
	(void)sqd;
}