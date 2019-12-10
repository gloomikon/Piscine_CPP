/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 23:44:01 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/10 23:44:01 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) : Form(target, 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &cpy) : Form(cpy) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

void	PresidentialPardonForm::operator=(PresidentialPardonForm const &cpy) {
	Form::operator=(cpy);
}

void	PresidentialPardonForm::execute(Bureaucrat const & bur) const {
	if (!this->getSigned())
		throw Form::FormNotSignedException();
	else if (this->getGradeExecute() < bur.getGrade())
		throw Form::GradeTooHighException();
	std::cout << this->getName() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
