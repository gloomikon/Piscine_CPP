/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 19:40:38 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/07 19:40:38 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"

int main() {
	{
		ISpaceMarine* bob = new TacticalMarine;
		ISpaceMarine* jim = new AssaultTerminator;
		ISquad* vlc = new Squad;
		vlc->push(bob);
		vlc->push(jim);
		for (int i = 0; i < vlc->getCount(); ++i)
		{
			ISpaceMarine* cur = vlc->getUnit(i);
			cur->battleCry();
			cur->rangedAttack();
			cur->meleeAttack();
		}
		delete vlc;
	}
	std::cout << std::endl <<std::endl;
	{
		ISpaceMarine* Rock = new TacticalMarine;
		ISpaceMarine* Joshua = new AssaultTerminator;
		ISpaceMarine* Din = Rock->clone();
		ISquad* sqd = new Squad;
		std::cout << "begin : " << sqd->getCount() << std::endl;
		sqd->push(Rock);
		sqd->push(Joshua);
		sqd->push(Din);
		std::cout << "added 3 new : " << sqd->getCount() << std::endl;
		sqd->push(Rock);
		sqd->push(Joshua);
		sqd->push(Din);
		std::cout << "added 3 old : " << sqd->getCount() << std::endl;
		for (int i = 0; i < sqd->getCount(); ++i)
		{
			ISpaceMarine* cur = sqd->getUnit(i);
			cur->battleCry();
			cur->rangedAttack();
			cur->meleeAttack();
		}
		delete sqd;
	}

	return 0;
}