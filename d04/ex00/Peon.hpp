/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 19:17:37 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/07 19:17:37 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
#define PEON_HPP

#include "Victim.hpp"

class Peon : public Victim
{
public:
	Peon(std::string name);
	Peon(Peon &cpy);
	~Peon();

	void getPolymorphed() const;

	void operator=(const Peon &cpy);
};

std::ostream &operator<<(std::ostream &o, const Peon &cpy);

#endif
