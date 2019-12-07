/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 19:25:07 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/07 19:25:07 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

int main()
{
	{
		Character* zaz = new Character("zaz");
		std::cout << *zaz;
		Enemy* b = new RadScorpion();
		AWeapon* pr = new PlasmaRifle();
		AWeapon* pf = new PowerFist();
		zaz->equip(pr);
		std::cout << *zaz;
		zaz->equip(pf);
		zaz->attack(b);
		std::cout << *zaz;
		zaz->equip(pr);
		std::cout << *zaz;
		zaz->attack(b);
		std::cout << *zaz;
		zaz->attack(b);
		std::cout << *zaz;
		delete zaz;
		delete b;
		delete pr;
		delete pf;
	}
	std::cout << std::endl << std::endl;
	{
		Character *Fred = new Character("Fred");
		Character *Jack = new Character("Jack");
		PowerFist *pow = new PowerFist();
		PlasmaRifle *plaz = new PlasmaRifle();
		SuperMutant *mut = new SuperMutant();
		RadScorpion *scorp = new RadScorpion();

		std::cout << *Fred << *Jack;

		Fred->equip(pow);
		Jack->equip(plaz);

		std::cout << *Fred << *Jack;

		Fred->attack(mut);
		Fred->attack(mut);

		Jack->attack(scorp);
		Jack->attack(scorp);

		std::cout << *Fred << *Jack;

		Fred->recoverAP();
		Jack->recoverAP();
		Jack->recoverAP();

		std::cout << *Fred << *Jack;

		Fred->attack(mut);
		Fred->attack(mut);

		Jack->attack(scorp);
		Jack->attack(scorp);

		std::cout << *Fred << *Jack;

		delete Fred;
		delete Jack;
		delete pow;
		delete plaz;
		delete mut;
		delete scorp;
	}
	return 0;
}
