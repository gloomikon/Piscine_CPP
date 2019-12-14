/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/14 15:06:56 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/14 15:17:46 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MindOpen.hpp"

int main()
{

	MindOpen interpreter;

	{
		interpreter.load("test1.mdp");
		interpreter.load("test2.mdp");

		std::cout << "#1:\n";
		interpreter.execute("test1.mdp");

		std::cout << "#2:\n";
		interpreter.execute("test2.mdp");

		try
		{
			interpreter.execute("doesn't exist");
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		try
		{
			interpreter.load("some non existant file");
			interpreter.execute("some non existant file");
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}

	{
		interpreter.load("test1.mdp");
		interpreter.load("test2.mdp");
		interpreter.executeAll();
	}
	return (0);
}
