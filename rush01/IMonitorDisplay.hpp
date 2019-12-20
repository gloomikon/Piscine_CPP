/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMonitorDisplay.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsamarsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/14 16:48:27 by dsamarsk          #+#    #+#             */
/*   Updated: 2019/12/15 21:12:45 by dsamarsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMONITORDISPLAY_HPP
# define IMONITORDISPLAY_HPP
# include <iostream>
# include "IMonitorModule.hpp"


class		IMonitorDisplay
{
public:
	IMonitorDisplay();
	virtual ~IMonitorDisplay();
	IMonitorDisplay(IMonitorDisplay const &src);
	IMonitorDisplay &operator=(IMonitorDisplay const &rhs);

	virtual void	initModules(IMonitorModule &module) = 0;
	virtual void	updateModules(IMonitorModule &module) = 0;
	virtual void	displayModules() = 0;
};

#endif
