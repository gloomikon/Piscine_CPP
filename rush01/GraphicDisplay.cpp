/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GraphicDisplay.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/14 17:49:22 by dsamarsk          #+#    #+#             */
/*   Updated: 2019/12/15 23:35:21 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "GraphicDisplay.hpp"

GraphicDisplay::GraphicDisplay() : m_w(600), m_h(800)
{
	if (SDL_Init(SDL_INIT_VIDEO) < 0)
	{
		std::cout << "[SDL_ERROR] SDL could not initialize!\n"
				  << SDL_GetError() << std::endl;
	}

	m_win = SDL_CreateWindow("ft_gkrellm",
							 SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, m_w, m_h, 0);
	if (m_win == NULL)
	{
		std::cout << "[SDL_ERROR] Window not created!"
				  << SDL_GetError() << std::endl;
	}

	m_img = SDL_CreateRenderer(m_win, -1, SDL_RENDERER_ACCELERATED);
	if (m_img == NULL)
	{
		std::cout << "[SDL_ERROR] Renderer not created!"
				  << SDL_GetError() << std::endl;
	}

	if (TTF_Init() < 0)
	{
		std::cout << "[SDL_ERROR] Init TTF failt!"
				  << SDL_GetError() << std::endl;
	}
	m_name_font = TTF_OpenFont("Roboto.ttf", 20);
	m_info_font = TTF_OpenFont("Roboto.ttf", 15);
	if (m_name_font == NULL || m_info_font == NULL)
	{
		std::cout << "[SDL_ERROR] Failt to load font!"
				  << SDL_GetError() << std::endl;
	}

	/* Set size of renderer to the same as window */
	SDL_RenderSetLogicalSize(m_img, m_w, m_h);

	/* init start background color */
	SDL_SetRenderDrawColor(m_img, 0x00, 0x00, 0x00, 0xFF);
	SDL_RenderClear(m_img);
}

GraphicDisplay::~GraphicDisplay()
{
	for (int it = 0; it < m_count; it++)
		delete m_module[it];

	SDL_DestroyRenderer(m_img);
	SDL_DestroyWindow(m_win);
	TTF_CloseFont(m_name_font);
	TTF_CloseFont(m_info_font);
	SDL_Quit();
}

GraphicDisplay::GraphicDisplay(GraphicDisplay const &src)
{
	*this = src;
}

GraphicDisplay &GraphicDisplay::operator=(GraphicDisplay const &rhs)
{
	if (this != &rhs)
	{
		m_w = rhs.m_w;
		m_h = rhs.m_h;
		m_win = rhs.m_win;
		m_img = rhs.m_img;
	}
	return (*this);
}

void GraphicDisplay::initModules(IMonitorModule &module)
{
	if (m_count < 8)
	{
		m_module[m_count] = &module;
		m_count++;
	}
}

void GraphicDisplay::updateModules(IMonitorModule &module)
{
	int text_width;
	int text_height;
	int text_pos_y;
	std::string name = module.getModuleName();
	std::string info = module.getData();

	text_pos_y = m_modul_rect.y;

	/*		display modul name		*/
	SDL_Color textColor = {147, 112, 180, 0};
	SDL_Surface *textSurface = TTF_RenderText_Blended(m_name_font, name.c_str(), textColor);
	SDL_Texture *text = SDL_CreateTextureFromSurface(m_img, textSurface);
	text_width = textSurface->w;
	text_height = textSurface->h;
	SDL_Rect renderQuad = {10, text_pos_y + 5, text_width, text_height};
	SDL_RenderCopy(m_img, text, NULL, &renderQuad);
	SDL_FreeSurface(textSurface);
	SDL_DestroyTexture(text);

	/*		display info		*/
	std::stringstream ss(info);
	std::string line;
	int move = 20;
	while (std::getline(ss, line))
	{
		move += 20;
		textColor = (SDL_Color){147, 112, 180, 0};
		textSurface = TTF_RenderText_Blended(m_info_font, line.c_str(), textColor);
		text = SDL_CreateTextureFromSurface(m_img, textSurface);
		text_width = textSurface->w;
		text_height = textSurface->h;
		renderQuad = (SDL_Rect){10, text_pos_y + move, text_width, text_height};
		SDL_RenderCopy(m_img, text, NULL, &renderQuad);
		SDL_FreeSurface(textSurface);
		SDL_DestroyTexture(text);
	}
}

void GraphicDisplay::displayModules()
{
	bool is_open = true;
	SDL_Event e;

	/* 			test fps			*/
	Uint32 frameStart = SDL_GetTicks();
	Uint32 frameTime = 0;
	Uint32 frameDelay = 50;

	while (is_open == true)
	{
		/*			test fps			*/
		frameTime = SDL_GetTicks() - frameStart;
		if (frameDelay > frameTime)
			SDL_Delay(frameDelay - frameTime);

		SDL_RenderClear(m_img);

		/*			hooks				*/
		while (SDL_PollEvent(&e))
		{
			if (e.type == SDL_KEYDOWN)
			{
				switch (e.key.keysym.sym)
				{
				case SDLK_h:
					m_module[0]->changeState();
					break;
				case SDLK_c:
					m_module[1]->changeState();
					break;
				case SDLK_d:
					m_module[2]->changeState();
					break;
				case SDLK_o:
					m_module[3]->changeState();
					break;
				case SDLK_m:
					m_module[4]->changeState();
					break;
				case SDLK_n:
					m_module[5]->changeState();
					break;
				case SDLK_p:
					m_module[6]->changeState();
					break;

				default:
					break;
				}
			}
			if (e.type == SDL_KEYDOWN || e.type == SDL_KEYUP)
			{
				if (e.key.keysym.sym == SDLK_ESCAPE)
					is_open = false;
			}
			if (e.type == SDL_QUIT)
				is_open = false;
		}
		/*	test	*/
		for (int iter = 0; iter < m_count; iter++)
		{
			m_modul_rect.x = 0;
			m_modul_rect.y = 0 + (100 * iter);
			m_modul_rect.w = m_w;
			m_modul_rect.h = 100;

			/* 		Draw all blocks		*/
			SDL_SetRenderDrawColor(m_img, 180, 180, 180, 255);
			SDL_RenderFillRect(m_img, &m_modul_rect);
			SDL_SetRenderDrawColor(m_img, 0, 0, 0, 255);
			SDL_RenderDrawRect(m_img, &m_modul_rect);

			/*		Draw	text		*/
			updateModules(*m_module[iter]);
		}

		/*		reset color and update window		*/
		SDL_SetRenderDrawColor(m_img, 0x00, 0x00, 0x00, 0xFF);
		SDL_RenderPresent(m_img);
	}
}

int GraphicDisplay::m_count = 0;
