/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 21:22:43 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/05 21:23:03 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main()
{

	Fixed a;
	Fixed const b(Fixed(6.9f) * Fixed(2));
	std::cout << "1 " << a << std::endl;
	std::cout << "2 " << ++a << std::endl;
	std::cout << "3 " << a << std::endl;
	std::cout << "4 " << a++ << std::endl;
	std::cout << "5 " << a << std::endl;
	std::cout << "6 " << b << std::endl;
	std::cout << "7 " << Fixed::max(a, b) << std::endl;

	return 0;
}
