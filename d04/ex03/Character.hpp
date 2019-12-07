/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 19:43:00 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/07 19:43:00 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

class Character : public ICharacter
{
	std::string	name;
	AMateria	*mater[4];

public:
	Character(std::string const & name);
	Character(Character const & cpy);
	void	operator=(Character const & cpy);
	~Character();
	std::string const & getName() const;
	void	equip(AMateria* m);
	void	unequip(int idx);
	void	use(int idx, ICharacter& target);
};

#endif
