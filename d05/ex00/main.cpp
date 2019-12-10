/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 11:43:33 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/10 11:43:33 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
	Bureaucrat test("low", 120);

	std::cout << test;
	test.increment(15);
	std::cout << test;
	test.decrement(45);	
	std::cout << test;

	try {
		test.decrement(1);
		test.decrement(1);
		test.decrement(0);

		std::cout << "Exception's did't work" << std::endl;

	} catch (std::exception & ex) {
		std::cout << ex.what() << std::endl;
	}
	try {
		Bureaucrat test2("hight", 0);

		std::cout << "Exception's did't work" << std::endl;
	} catch (std::exception &ex) {
		std::cout << ex.what() << std::endl;
	}

	return 0;
}
