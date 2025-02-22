/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 23:01:02 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/04 23:09:33 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"
#include <iostream>

Human::Human()
{
}

Human::~Human()
{
}

void Human::meleeAttack(std::string const &target)
{
	std::cout << "We attacking a " << target << " with melee\n";
}

void Human::rangedAttack(std::string const &target)
{
	std::cout << "We attacking a " << target << " by ranged attack\n";
}

void Human::intimidatingShout(std::string const &target)
{
	std::cout << "We intimidate a " << target << " by shout\n";
}

void Human::action(std::string const &action_name, std::string const &target)
{
	std::string actName[3] = {"melee", "ranged", "shout"};
	void (Human::*actionArr[3])(std::string const &) =
		{
			&Human::meleeAttack,
			&Human::rangedAttack,
			&Human::intimidatingShout
		};

	for(int i = 0; i < 3; i++)
		if(actName[i] == action_name)
			(this->*actionArr[i])(target);
}