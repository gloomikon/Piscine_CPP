/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShellDisplay.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsamarsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/15 16:14:07 by dsamarsk          #+#    #+#             */
/*   Updated: 2019/12/15 23:26:38 by dsamarsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShellDisplay.hpp"

ShellDisplay::ShellDisplay()
{
	std::cout << "\e[8;" << 50 << ";" << 80 << "t" << std::endl;

	initscr();
	cbreak();
	noecho();
	keypad(stdscr, TRUE);
	nodelay(stdscr, TRUE);
	curs_set(0);
	start_color();
	init_pair(1, COLOR_CYAN, COLOR_BLACK);
	init_pair(2, COLOR_RED, COLOR_BLACK);
	init_pair(3, COLOR_YELLOW, COLOR_BLACK);
	refresh();
	getmaxyx(stdscr, m_h, m_w);
	m_x = 0;
	m_y = 0;
	refresh();
}

ShellDisplay::~ShellDisplay()
{
	for (int it = 0; it < m_mod_count; it++)
		delete m_module[it];
	erase();
	endwin();
}

ShellDisplay::ShellDisplay(ShellDisplay const &src)
{
	*this = src;
}

ShellDisplay &ShellDisplay::operator=(ShellDisplay const &rhs)
{
	if (this != &rhs)
	{
		m_w = rhs.m_w;
		m_h = rhs.m_h;
		m_x = rhs.m_x;
		m_y = rhs.m_y;
	}
	return (*this);
}

void	ShellDisplay::initModules(IMonitorModule &module)
{
	if (m_mod_count < 8)
	{
		m_module[m_mod_count] = &module;	
		m_mod_count++;
	}
}

void	ShellDisplay::updateModules(IMonitorModule &module)
{
	std::string		name = module.getModuleName();	
	std::string		info = module.getData();
	int		width = 80;
	int		height = 6;
	WINDOW	*win = newwin(height, width, m_y, m_x);
	int		m_text_y = m_y;

	box(win, 0 ,0);
	/*		name		*/
	wattron(win, A_BOLD | COLOR_PAIR(3));
	mvwaddstr(win, 0, width / 2 - name.size() / 2, name.c_str());
	wattroff(win, A_BOLD | COLOR_PAIR(3));
	/*		info		*/
	std::stringstream	ss(info);	
	std::string		line;
	int	move = 1;
	while (std::getline(ss,line))
	{	
		move += 1;
		mvwaddstr(win, move, 5, line.c_str());
	}
	wrefresh(win);
	delwin(win);

}

void	ShellDisplay::displayModules()
{
	bool		is_open = true;
	

	while (is_open)
	{
		int key = getch();
		if (key == 27)
		{
			is_open = false;
		}
		for (int iter = 0; iter < m_mod_count; iter++)
		{
			m_x = 0;
			m_y = (6 * iter);
			updateModules(*m_module[iter]);
		}
	
		erase();
		usleep(1000000);
	}
}

int		ShellDisplay::m_mod_count = 0;
