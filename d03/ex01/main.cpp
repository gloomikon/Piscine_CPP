/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/06 22:18:57 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/06 22:55:55 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	srand(time(0));
	FragTrap ftbot1 = FragTrap("Kolumbia");
	FragTrap ftbot2 = FragTrap(ftbot1);
	ftbot2.setName("Qwerty");
	ScavTrap bot1 = ScavTrap("Bethany Tusen");
	ScavTrap bot2 = ScavTrap(bot1);
	bot2.setName("QAZ");

	ftbot1.takeDamage(50);
	ftbot1.beRepaired(80);
	ftbot2.meleeAttack("Borton");
	ftbot2.rangedAttack("Lenk");
	ftbot1.vaulthunter_dot_exe(ftbot2.getName());
	ftbot1.vaulthunter_dot_exe(ftbot2.getName());
	ftbot1.vaulthunter_dot_exe(ftbot2.getName());
	ftbot2.takeDamage(40);
	ftbot2.beRepaired(10);
	ftbot2.takeDamage(90);
	ftbot1.vaulthunter_dot_exe(ftbot2.getName());
	ftbot1.vaulthunter_dot_exe(ftbot2.getName());
	ftbot1.vaulthunter_dot_exe(ftbot2.getName());

	bot1.takeDamage(50);
	bot1.beRepaired(80);
	bot2.meleeAttack("Borton");
	bot2.rangedAttack("Lenk");
	bot1.challengeNewcomer();
	bot1.challengeNewcomer();
	bot1.challengeNewcomer();
	bot2.takeDamage(40);
	bot2.beRepaired(10);
	bot2.takeDamage(90);
	bot1.challengeNewcomer();
	bot1.challengeNewcomer();
	bot1.challengeNewcomer();
}
