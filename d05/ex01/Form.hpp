/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 12:31:20 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/10 12:31:20 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	const std::string	name;
	bool				_signed;
	const int			gdSign;
	const int			gdExec;

	struct		GradeTooHighException : std::exception {
		char const			*what() const throw();
	};

	struct		GradeTooLowException : std::exception {
		char const			*what() const throw();
	};

public:
	Form(std::string const &name = "form", int sgn = 50, int ex = 50);
	Form(Form const &cpy);
	~Form();
	void		operator=(Form const &cpy);
	std::string	getName() const;
	int			getGradeSign() const;
	int			getGradeExecute() const;
	bool		getSigned() const;
	void		beSigned(Bureaucrat const &bur);

};

std::ostream &operator<<(std::ostream &o, Form const &form);

#endif
