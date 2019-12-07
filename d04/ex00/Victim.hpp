/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 19:18:26 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/07 19:18:26 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <iostream>
#include <string>

class Victim
{
public:
	Victim(std::string name);
	Victim(Victim &cpy);
	virtual ~Victim();
	
	std::string		getname() const;

	virtual void	getPolymorphed() const;

	void			operator=(const Victim & cpy);

protected:
	std::string name;
};

std::ostream	&operator<<(std::ostream &o, const Victim &cpy);

#endif
