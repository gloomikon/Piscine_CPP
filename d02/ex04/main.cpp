/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 21:53:50 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/05 21:55:28 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

std::string rm_char(std::string str, char c)
{
	std::string res = "";

	size_t i = 0;
	while (str[i] != 0)
	{
		if (str[i] != c)
			res += str[i];
		i++;
	}
	return (res);
}

bool is_sign(char c)
{
	return (c == '+'
	|| c == '-'
	|| c == '*'
	|| c == '/');
}

bool is_greter_sign(char prev, char cur)
{
	if (prev == cur)
		return (false);
	if ((prev == '-' || prev == '+') && (cur == '*' || cur == '/'))
		return (true);
	return (false);
}

size_t skeep_to_sign(std::string &str, size_t i)
{
	if (is_sign(str[i]))
		i++;
	while (str[i] != 0 && !is_sign(str[i]))
		i++;
	return (i);
}

Fixed make_math(Fixed &f1, char act, Fixed &f2)
{
	if (act == '+')
		return (f1 + f2);
	if (act == '-')
		return (f1 - f2);
	if (act == '*')
		return (f1 * f2);
	if (act == '/')
		return (f1 / f2);
	return (Fixed());
}

Fixed calc_str(std::string str)
{
	size_t i = 0;
	Fixed f[3];
	char act = 0;

	while (str[i] != 0)
	{
		if (act != 0)
		{
			f[1] = Fixed((float)std::atof(&str[i]));
			i = skeep_to_sign(str, i);
			while (str[i] != 0 && is_greter_sign(act, str[i]))
			{
				if (str[i + 1] == 0)
					break;
				f[2] = Fixed((float)std::atof(&str[i + 1]));
				f[1] = make_math(f[1], str[i], f[2]);
				i = skeep_to_sign(str, i);
			}
			f[0] = make_math(f[0], act, f[1]);
			if (str[i] != 0)
				act = str[i++];
		}
		else
		{
			f[0] = Fixed((float)std::atof(&str[i]));
			i = skeep_to_sign(str, i);
			if (str[i] == 0)
				break;
			act = str[i++];
		}
	}
	return (f[0]);
}

void evalExpr(std::string str)
{
	ssize_t openBracket = str.find_last_of('(');
	if (openBracket >= 0)
	{
		if (str[openBracket + 1] == 0)
		{
			std::cout << "Error with brackets\n";
			return;
		}
		openBracket++;
		ssize_t closedBracket = str.find(')', openBracket);
		if (closedBracket < 0)
		{
			std::cout << "Error with brackets\n";
			return;
		}
		Fixed tRes = calc_str(str.substr(openBracket, closedBracket - openBracket));
		std::string tResStr = std::to_string(tRes.toFloat());
		str.replace(openBracket - 1, closedBracket - openBracket + 2, tResStr);
	}
	else
	{
		Fixed res = calc_str(str);
		std::cout << "Result is: " << res.toFloat() << "\n";
		exit(0);
	}
	evalExpr(str);
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		try
		{
			std::string tstr = rm_char(av[1], ' ');
			evalExpr(tstr);
		}
		catch (...)
		{
			std::cout << "ERROR\n";
			exit(0);
		}
	}
	else
		std::cout << "Usage: ./eval_expr \"math expression\"\n";

	return 0;
}
