/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 12:22:55 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/10 12:22:55 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	const std::string	name;
	int					grade;

	struct		GradeTooHighException : std::exception {
		char const			*what() const throw();
	};

	struct		GradeTooLowException : std::exception {
		char const			*what() const throw();
	};

public:

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

};

std::ostream &operator<<(std::ostream &o, Bureaucrat const &bur);

#endif
