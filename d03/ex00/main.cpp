/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/06 21:19:31 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/06 22:55:48 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	srand(time(0));
	FragTrap ftbot1 = FragTrap("Kolumbia");
	FragTrap ftbot2 = FragTrap(ftbot1);

	ftbot2.setName("Qwerty");
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
}
