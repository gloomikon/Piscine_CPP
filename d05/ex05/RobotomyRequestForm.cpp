/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 00:16:53 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/11 00:16:53 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) : Form(target, 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &cpy) : Form(cpy) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

void	RobotomyRequestForm::operator=(RobotomyRequestForm const &cpy) {
	Form::operator=(cpy);
}

void	RobotomyRequestForm::execute(Bureaucrat const & bur) const {
	if (!this->getSigned())
		throw Form::FormNotSignedException();
	else if (this->getGradeExecute() < bur.getGrade())
		throw Form::GradeTooHighException();
	std::cout << "DrRrRrRrRr " << this->getName() <<
	(rand() % 2 ? " failed in an attempt to robotize."
	: " has been robotomized successfully") << std::endl;
}
