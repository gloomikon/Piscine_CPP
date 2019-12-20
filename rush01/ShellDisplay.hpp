/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShellDisplay.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsamarsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/15 16:13:23 by dsamarsk          #+#    #+#             */
/*   Updated: 2019/12/15 23:26:39 by dsamarsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SHELLDISPLAY_HPP
# define SHELLDISPLAY_HPP
# include "IMonitorDisplay.hpp"
# include <ncurses.h>
# include <iostream>
# include <string.h>
# include <unistd.h>
# include <sstream>
# include "IMonitorModule.hpp"
# include "HostnameUsernameMonitore.hpp"
# include "CpuMonitore.hpp"
# include "DateTimeMonitore.hpp"
# include "OsMonitore.hpp"
# include "MemoryMonitore.hpp"
# include "NetworkMonitore.hpp"
# include "PredictionsMonitore.hpp"

class		ShellDisplay : public IMonitorDisplay
{
public:
	ShellDisplay();
	virtual ~ShellDisplay();
	ShellDisplay(ShellDisplay const &src);
	ShellDisplay &operator=(ShellDisplay const &rhs);

	virtual void	initModules(IMonitorModule &module);
	virtual void	updateModules(IMonitorModule &module);
	virtual void	displayModules();

private:
	int		m_w;
	int		m_h;
	int		m_x;
	int		m_y;
	static	int		m_mod_count;
	IMonitorModule 	*m_module[8];
};

#endif
