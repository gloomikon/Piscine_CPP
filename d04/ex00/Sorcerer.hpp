/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 19:18:03 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/07 19:18:03 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
#define SORCERER_HPP

#include "Peon.hpp"

class Sorcerer
{
public:
	Sorcerer(std::string name, std::string title);
	Sorcerer(Sorcerer &cpy);
	~Sorcerer();

	std::string getname() const;
	std::string gettitle() const;

	void operator=(const Sorcerer &cpy);

	void polymorph(Victim const &vic) const;

private:
	std::string name;
	std::string title;
};

std::ostream &operator<<(std::ostream &o, const Sorcerer &cpy);

#endif
