/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 23:01:17 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/04 23:09:38 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Human.hpp"

int main()
{
	Human kolumbia;

	kolumbia.action("melee", "zombie");
	kolumbia.action("ranged", "pumpkin");
	kolumbia.action("shout", "donat");
	return 0;
}
