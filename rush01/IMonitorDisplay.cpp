/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMonitorDisplay.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsamarsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/14 17:03:26 by dsamarsk          #+#    #+#             */
/*   Updated: 2019/12/15 18:37:46 by dsamarsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMonitorDisplay.hpp"

IMonitorDisplay::IMonitorDisplay()
{}

IMonitorDisplay::~IMonitorDisplay()
{}

IMonitorDisplay::IMonitorDisplay(IMonitorDisplay const &src)
{
	*this = src;
}

IMonitorDisplay &IMonitorDisplay::operator=(IMonitorDisplay const &rhs)
{
	(void)rhs;
	return (*this);
}
