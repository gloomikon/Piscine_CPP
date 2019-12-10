/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 13:39:34 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/10 13:39:34 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int main() {
	srand(time(0));
	Bureaucrat	st("Stive", 3);
	Bureaucrat	lk("Luke", 30);
	Intern		inr;
	Form	*	frm;

	std::cout << st << lk;


	try {

		std::cout << std::endl << "creating shrubbery creation:" << std::endl;
		frm = inr.makeForm("shrubbery creation", "tree");

		std::cout << *frm;
		st.executeForm(*frm);
		lk.signForm(*frm);
		lk.executeForm(*frm);
		st.signForm(*frm);
		delete frm;

	} catch (std::exception & ex) {
		std::cout << "intern could not create a form, because " << ex.what() << std::endl;
	}

	try {

		std::cout << std::endl << "creating presidential pardon:" << std::endl;
		frm = inr.makeForm("presidential pardon", "press");

		std::cout << *frm;
		lk.signForm(*frm);
		st.signForm(*frm);
		lk.executeForm(*frm);
		st.executeForm(*frm);
		delete frm;

	} catch (std::exception & ex) {
		std::cout << "intern could not create a form, because " << ex.what() << std::endl;
	}

	try {

		std::cout << std::endl << "creating super form:" << std::endl;
		frm = inr.makeForm("super form", "mouse");

		std::cout << *frm;
		lk.signForm(*frm);
		lk.executeForm(*frm);
		st.signForm(*frm);
		st.executeForm(*frm);
		delete frm;

	} catch (std::exception & ex) {
		std::cout << "intern could not create a form, because " << ex.what() << std::endl;
	}

	try {

		std::cout << std::endl << "creating robotomy request:" << std::endl;
		frm = inr.makeForm("robotomy request", "press");

		std::cout << *frm;
		lk.signForm(*frm);
		lk.executeForm(*frm);
		st.signForm(*frm);
		st.executeForm(*frm);
		delete frm;

	} catch (std::exception & ex) {
		std::cout << "intern could not create a form, because " << ex.what() << std::endl;
	}

	return 0;
}
