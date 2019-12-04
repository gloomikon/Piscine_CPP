/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 23:03:04 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/04 23:03:05 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <fstream>
#include <iostream>

Cat::Cat()
{
}

Cat::~Cat()
{
}

void Cat::file(std::string const &fname)
{
	std::ifstream file(fname, std::ios::binary);
	if (!file)
	{
		std::cout << "cat: " << fname << ": No such file or directory\n";
		return;
	}

	char c;
	std::string res;
	while (!file.eof())
	{
		file.read (&c, 1);
		if (!file.eof())
			res += c;
	}
	std::cout << res;

	file.close();
}

void Cat::console()
{
	std::string buf;
	while (!std::cin.eof())
	{
		getline(std::cin, buf);
		if (!std::cin.eof())
			std::cout << buf << "\n";
	}
}
