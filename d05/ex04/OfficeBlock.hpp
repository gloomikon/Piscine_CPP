/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 23:43:54 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/10 23:43:54 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OFFICE_BLOCK
#define OFFICE_BLOCK

#include "Intern.hpp"

class OfficeBlock
{
	Intern *inr;
	Bureaucrat *sign;
	Bureaucrat *exec;

public:
	struct		NotThreeSpotsException : std::exception {
		char const			*what() const throw();
	};

	OfficeBlock();
	OfficeBlock(Intern *inr, Bureaucrat *sigBur, Bureaucrat *exBur);
	~OfficeBlock();
	void	setIntern(Intern *inr);
	void	setSigningBureaucrat(Bureaucrat *sigBur);
	void	setExecutingBureaucrat(Bureaucrat *exBur);
	void	doBureaucracy(std::string form, std::string target);

};

#endif
