/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 23:43:17 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/10 23:43:17 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{

public:
	struct		NonExistentFormException : std::exception {
		char const			*what() const throw();
	};

	Intern();
	Intern(Intern const &cpy);
	~Intern();
	void	operator=(Intern const &cpy);
	Form	*makeForm(std::string name, std::string target);
	
};

#endif
