/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 22:44:59 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/04 22:45:08 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Human.hpp"

int		main( void )
{
	Human kolumbia;

	std::cout << kolumbia.identify() << std::endl;
	std::cout << kolumbia.getBrain().identify() << std::endl;

	return 0;
}
