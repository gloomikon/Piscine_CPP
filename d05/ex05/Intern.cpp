/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 00:15:34 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/11 00:15:34 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(Intern const &cpy) {
	(void)cpy;
}

Intern::~Intern() {}

void	Intern::operator=(Intern const &cpy) {
	(void)cpy;
}

char const	*Intern::NonExistentFormException::what() const throw() {
	return "this form does not exist";
}

Form	*Intern::makeForm(std::string name, std::string target) {
	Form	*fm = 0;
	if (name == "presidential pardon")
		fm = new PresidentialPardonForm(target);
	else if (name == "robotomy request")
		fm = new RobotomyRequestForm(target);
	else if (name == "shrubbery creation")
		fm = new ShrubberyCreationForm(target);
	else
		throw Intern::NonExistentFormException();
	std::cout << "Intern creat " << name << " form" << std::endl;
	return fm;
}
