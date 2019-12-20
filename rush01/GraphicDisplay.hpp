/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GraphicDisplay.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsamarsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/14 17:16:28 by dsamarsk          #+#    #+#             */
/*   Updated: 2019/12/15 23:26:41 by dsamarsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GRAPHICDISPLAY_HPP
# define GRAPHICDISPLAY_HPP
# include "IMonitorDisplay.hpp"
# include <SDL.h>
# include <SDL_ttf.h>
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


class		GraphicDisplay : public IMonitorDisplay
{
public:
	GraphicDisplay();
	virtual ~GraphicDisplay();
	GraphicDisplay(GraphicDisplay const &src);
	GraphicDisplay &operator=(GraphicDisplay const &rhs);

	virtual void	initModules(IMonitorModule &module);
	virtual void	updateModules(IMonitorModule &module);
	virtual void	displayModules();

private:
	int				m_w;
	int				m_h;
	SDL_Window		*m_win;
	SDL_Renderer	*m_img;
	TTF_Font		*m_name_font;	
	TTF_Font		*m_info_font;	
	SDL_Rect		m_modul_rect;

	static	int		m_count;
	IMonitorModule 	*m_module[8];
};

#endif
