/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NetworkMonitore.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/15 17:34:11 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/15 23:32:07 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NetworkMonitore.hpp"

NetworkMonitore::NetworkMonitore()
{
	this->active = true;
}

NetworkMonitore::~NetworkMonitore() {}

void NetworkMonitore::updateData()
{
	if (!this->active)
	{
		this->data = "Disabled";
		return;
	}
	std::system("top -l 1 | grep --line-buffered \"Networks: packets:\" > netinfo");
	std::ifstream nifs("netinfo");
	std::string nline = "";

	getline(nifs, nline, '\0');
	nline.erase(nline.end() - 1, nline.end());
	this->data = nline;
}

std::string NetworkMonitore::getModuleName()
{
	return "NETWORK";
}

NetworkMonitore::NetworkMonitore(NetworkMonitore const &sqd)
{
	(void)sqd;
}

void NetworkMonitore::operator=(NetworkMonitore const &sqd)
{
	(void)sqd;
}