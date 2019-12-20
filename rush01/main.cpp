/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/14 16:47:32 by dsamarsk          #+#    #+#             */
/*   Updated: 2019/12/15 23:37:15 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "GraphicDisplay.hpp"
#include "ShellDisplay.hpp"

void ncurses()
{

	IMonitorModule *a = new HostnameUsernameMonitore();
	IMonitorModule *b = new CpuMonitore();
	IMonitorModule *c = new DateTimeMonitore();
	IMonitorModule *d = new OsMonitore();
	IMonitorModule *f = new MemoryMonitore();
	IMonitorModule *g = new NetworkMonitore();
	IMonitorModule *h = new PredictionsMonitore();

	ShellDisplay test1;

	test1.initModules(*a);
	test1.initModules(*b);
	test1.initModules(*c);
	test1.initModules(*d);
	test1.initModules(*f);
	test1.initModules(*g);
	test1.initModules(*h);

	test1.displayModules();
}

void sdl()
{
	IMonitorModule *a = new HostnameUsernameMonitore();
	IMonitorModule *b = new CpuMonitore();
	IMonitorModule *c = new DateTimeMonitore();
	IMonitorModule *d = new OsMonitore();
	IMonitorModule *f = new MemoryMonitore();
	IMonitorModule *g = new NetworkMonitore();
	IMonitorModule *h = new PredictionsMonitore();

	GraphicDisplay test1;
	test1.initModules(*a);
	test1.initModules(*b);
	test1.initModules(*c);

	test1.initModules(*d);
	test1.initModules(*f);
	test1.initModules(*g);
	test1.initModules(*h);

	test1.displayModules();
}

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Usage: ./ft_gkrellm -text | -vizual" << std::endl;
		return 1;
	}
	if (std::string(av[1]) == "-text")
	{
		ncurses();
	}
	else if (std::string(av[1]) == "-vizual")
	{
		sdl();
	}
	else
	{
		std::cout << "Usage: ./ft_gkrellm -text | -vizual" << std::endl;
		return 1;
	}

	return (0);
}
