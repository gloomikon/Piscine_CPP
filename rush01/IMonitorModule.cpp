/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMonitorModule.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/15 16:04:21 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/15 23:30:50 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMonitorModule.hpp"

std::string IMonitorModule::getData()
{
	this->updateData();
	return this->data;
}

void IMonitorModule::changeState()
{
	this->active = !this->active;
}