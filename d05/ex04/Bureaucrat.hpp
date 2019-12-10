/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 23:42:53 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/10 23:42:53 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>
#include <cstdlib>
#include <ctime>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	const std::string	name;
	int					grade;

public:

	struct		GradeTooHighException : std::exception {
		char const			*what() const throw();
	};

	struct		GradeTooLowException : std::exception {
		char const			*what() const throw();
	};

	Bureaucrat();
	Bureaucrat(std::string const &name, int gd);
	Bureaucrat(Bureaucrat const &cpy);
	~Bureaucrat();
	void		operator=(Bureaucrat const &cpy);
	void		increment(int nb);
	void		decrement(int nb);
	std::string	getName() const;
	int			getGrade() const;
	void		signForm(Form &form) const;
	void		executeForm(Form const & form);

};

std::ostream &operator<<(std::ostream &o, Bureaucrat const &bur);

#endif
