/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/06 22:51:16 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/06 22:56:45 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

int main()
{
	srand(time(0));
	FragTrap ft = FragTrap("Lucas");
	ScavTrap st = ScavTrap("Dude");
	NinjaTrap nt("Rooster");
	SuperTrap zd("Cock");

	nt.ninjaShoebox(ft);
	ft.beRepaired(90);
	zd.ninjaShoebox(ft);
	ft.beRepaired(30);
	ft.vaulthunter_dot_exe("Rook");
	zd.vaulthunter_dot_exe("Don");

	return 0;
}
