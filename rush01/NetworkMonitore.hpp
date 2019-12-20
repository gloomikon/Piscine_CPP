/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NetworkMonitore.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/15 17:33:18 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/15 20:02:48 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NETWORKMONITORE
#define NETWORKMONITORE

#include "IMonitorModule.hpp"
#include <sys/sysctl.h>
#include <sys/types.h>
#include <mach/mach.h>
#include <unistd.h>
#include <string>
#include <fstream>

class NetworkMonitore : public IMonitorModule
{
public:
	NetworkMonitore();
	virtual ~NetworkMonitore();
	virtual void updateData();
	virtual std::string getModuleName();

	NetworkMonitore(NetworkMonitore const &src);
	void operator=(NetworkMonitore const &rhs);
};

#endif