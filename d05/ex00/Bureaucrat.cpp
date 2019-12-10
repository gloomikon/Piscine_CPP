/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 11:43:27 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/10 11:43:27 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat(std::string const &name, int gd) : name(name) {
	if (gd < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (gd > 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade = gd;
}

Bureaucrat::Bureaucrat(Bureaucrat const &cpy) : name(cpy.name) {
	*this = cpy;
}

Bureaucrat::~Bureaucrat() {}

void		Bureaucrat::operator=(Bureaucrat const &cpy) {
	if (this != &cpy)
		this->grade = cpy.grade;
}

void		Bureaucrat::increment(int nb) {
	if (this->grade - nb < 1)
		throw Bureaucrat::GradeTooHighException();
	this->grade -= nb;
}

void		Bureaucrat::decrement(int nb) {
	if (this->grade + nb > 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade += nb;
}

std::string	Bureaucrat::getName() const {
	return this->name;
}

int			Bureaucrat::getGrade() const {
	return this->grade;
}

char const	*Bureaucrat::GradeTooLowException::what(void) const throw() {
	return "Grade too low !";
}

char const	*Bureaucrat::GradeTooHighException::what(void) const throw() {	
	return "Grade too high !";
}

std::ostream &operator<<(std::ostream &o, Bureaucrat const &bur) {
	o << bur.getName() << ", bureaucrat grade " << bur.getGrade() << std::endl;
	return o;
}
