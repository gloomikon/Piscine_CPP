/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 12:31:26 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/10 12:31:26 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int main() {
	Bureaucrat	k("Kolumbia", 16);
	Bureaucrat	bt("Bethany Tusen", 20);
	Form		doc("doc", 30, 30);
	Form		imp("important", 5, 5);

	std::cout << k << bt;
	std::cout << doc << imp;

	k.increment(11);
	std::cout << k;

	try {
		k.increment(5);

		std::cout << "Exception's did't work" << std::endl;

	} catch (std::exception & ex) {
		std::cout << ex.what() << std::endl;
	}
	try {
		bt.decrement(131);

		std::cout << "Exception's did't work" << std::endl;
	} catch (std::exception &ex) {
		std::cout << ex.what() << std::endl;
	}
	try {

		bt.signForm(doc);
		k.signForm(doc);
		std::cout << doc;

		bt.signForm(imp);
		std::cout << imp;
		k.signForm(imp);
		std::cout << imp;
	} catch (std::exception & ex) {
		std::cout << ex.what() << std::endl;
	}

	return 0;
}
