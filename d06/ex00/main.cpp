/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 13:02:48 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/11 13:22:57 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>

void print_char(char c)
{
	if (std::isprint(c))
		std::cout << "char: '" << c << "'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(c) << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(c) << std::endl;
}

void cast(std::string s)
{
	if (s.size() == 1 && (s[0] > 57 || s[0] < 48))
	{
		print_char(s[0]);
		return;
	}
	try
	{
		int i = std::stoi(s);
		if (std::isprint(i))
			std::cout << "char: '" << static_cast<char>(i) << "'" << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
		std::cout << "int: " << i << std::endl;
	}
	catch (...)
	{
		std::cout << "int: impossible" << std::endl;
		std::cout << "char: impossible" << std::endl;
	}
	try
	{
		float f = std::stof(s);
		std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
	}
	catch (...)
	{
		std::cout << "float: nanf" << std::endl;
	}
	try
	{
		double d = std::stod(s);
		std::cout << "double: " << std::fixed << std::setprecision(1) << d << std::endl;
	}
	catch (...)
	{
		std::cout << "double: nan" << std::endl;
	}
}

int main(int ac, char const **av)
{
	if (ac != 2)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return (1);
	}
	if (av[1])
		cast(av[1]);
	return 0;
}
