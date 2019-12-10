/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CentralBureaucracy.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 00:14:59 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/11 00:14:59 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CENTRAL_BUREAUCRACY
#define CENTRAL_BUREAUCRACY

#include "OfficeBlock.hpp"

class CentralBureaucracy
{
	OfficeBlock ofs[20];
	int			burs;
	Intern		inr;
	int			trs;
	std::string	tgs[30];

public:

	CentralBureaucracy();
	~CentralBureaucracy();
	void	feed(Bureaucrat *bur);
	void	queueUp(std::string const &target);
	void	doBureaucracy();
};

#endif
