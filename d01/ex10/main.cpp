/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 23:03:23 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/04 23:03:24 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.hpp"

int		main( int ac, char ** av )
{
	if (ac > 1)
		for (int i = 1; i < ac; i++)
			Cat::file(av[i]);
	else
		Cat::console();

	return 0;
}
