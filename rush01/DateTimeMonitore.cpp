/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DateTimeMonitore.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/15 17:34:11 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/15 23:31:10 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DateTimeMonitore.hpp"
#include <algorithm>
DateTimeMonitore::DateTimeMonitore()
{
	this->active = true;
}

DateTimeMonitore::~DateTimeMonitore() {}

void DateTimeMonitore::updateData()
{
	if (!this->active)
	{
		this->data = "Disabled";
		return;
	}
	time_t rawtime;
	struct tm *timeinfo;

	time(&rawtime);
	timeinfo = localtime(&rawtime);
	std::string time = asctime(timeinfo);
	time.erase(time.end() - 1, time.end());
	this->data = time;
}

std::string DateTimeMonitore::getModuleName()
{
	return "DATE AND TIME";
}

DateTimeMonitore::DateTimeMonitore(DateTimeMonitore const &sqd)
{
	(void)sqd;
}

void DateTimeMonitore::operator=(DateTimeMonitore const &sqd)
{
	(void)sqd;
}