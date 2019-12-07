/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 19:16:52 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/07 19:16:52 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

int main()
{
	{
		Sorcerer robert("Robert", "the Magnificent");
		Victim jim("Jimmy");
		Peon joe("Joe");
		std::cout << robert << jim << joe;
		robert.polymorph(jim);
		robert.polymorph(joe);
	}
	std::cout << std::endl
			  << std::endl;
	{
		Sorcerer src("Richard", "wizard");
		Victim vic("Mark");
		Victim vic2("Scot");
		Peon pn("Frog");
		Peon pn2(pn);

		std::cout << src << vic << vic2;

		vic2 = vic;

		src.polymorph(vic);
		src.polymorph(vic2);
		src.polymorph(pn);
		src.polymorph(pn2);
	}
	return 0;
}
