/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMonitorModule.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/15 15:55:49 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/15 23:30:40 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMONITORMODULE_HPP
#define IMONITORMODULE_HPP

#include <iostream>

class IMonitorModule
{
public:
	virtual ~IMonitorModule() {}
	virtual void updateData() = 0;
	virtual std::string getModuleName() = 0;
	std::string getData();
	void changeState();

protected:
	std::string data;
	bool active;
};

#endif