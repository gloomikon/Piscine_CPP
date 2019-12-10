/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 13:40:09 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/10 13:40:09 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) : Form(target, 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &cpy) : Form(cpy) {}

void	ShrubberyCreationForm::operator=(ShrubberyCreationForm const &cpy) {
	Form::operator=(cpy);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void	ShrubberyCreationForm::execute(Bureaucrat const & bur) const {
	if (!this->getSigned())
		throw Form::FormNotSignedException();
	else if (this->getGradeExecute() < bur.getGrade())
		throw Form::GradeTooHighException();
  std::string filenm = this->getName() + "_shrubbery";
	std::ofstream fl(filenm.c_str());

	fl <<  std::endl <<
"         &&& &&  & &&          " <<  std::endl <<
"     && &\\/&\\|& ()|/ @, &&     " <<  std::endl <<
"      &\\/(/&/&||/& /_/)_&/_&   " <<  std::endl <<
"   &() &\\/&|()|/&\\/ '%\" & ()   " <<  std::endl <<
"  &_\\_&&_\\ |& |&&/&__%_/_& &&  " <<  std::endl <<
"&&   && & &| &| /& & % ()& /&& " <<  std::endl <<
" ()&_---()&\\&\\|&&-&&--%---()~  " <<  std::endl <<
"     &&     \\|||               " <<  std::endl <<
"             |||               " <<  std::endl <<
"             |||               " <<  std::endl <<
"             |||               " <<  std::endl <<
"       , -=-~  .-^- _          " <<  std::endl;

	fl.close();
}
