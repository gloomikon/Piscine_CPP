/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 13:23:04 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/10 13:23:04 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main() {
	srand(time(0));
	Bureaucrat	st("Stive", 3);
	Bureaucrat	lk("Luke", 30);
	Form	*tr = new ShrubberyCreationForm("tree");
	Form	*rb = new RobotomyRequestForm("robo");
	Form	*pr = new PresidentialPardonForm("pres");

	std::cout << st << lk;
	std::cout << *tr << *rb << *pr;

	try {

		lk.executeForm(*tr);
		lk.signForm(*tr);
		std::cout << *tr;
		lk.executeForm(*tr);

		st.executeForm(*rb);
		st.signForm(*rb);
		lk.signForm(*rb);
		st.executeForm(*rb);
		lk.executeForm(*rb);

		lk.signForm(*pr);
		st.signForm(*pr);
		lk.executeForm(*pr);
		st.executeForm(*pr);

	} catch (std::exception & ex) {
		std::cout << ex.what() << std::endl;
	}

	delete tr;
	delete rb;
	delete pr;

	return 0;
}
