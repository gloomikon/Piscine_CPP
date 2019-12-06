/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/06 22:42:36 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/06 22:46:25 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

int		main()
{
	srand(time(0));
	FragTrap ft = FragTrap("Kolumbia");
	ScavTrap st = ScavTrap("BT");
	NinjaTrap nt("Moonsinger");
	NinjaTrap zd = nt;
	zd.setName("MrAmsterdam");

	zd.ninjaShoebox(ft);
	zd.ninjaShoebox(st);
	ft.beRepaired(50);
	zd.ninjaShoebox(nt);
	st.beRepaired(20);
	zd.ninjaShoebox(ft);
	zd.ninjaShoebox(st);
	zd.ninjaShoebox(ft);
	zd.ninjaShoebox(ft);

	return 0;
}
