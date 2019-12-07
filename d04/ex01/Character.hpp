/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 19:24:12 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/07 19:24:12 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
private:
	std::string	name;
	AWeapon		*weap;
	int			ap;

public:
	Character(std::string const & name);
	Character(Character const &cpy);
	void	operator=(const Character & cpy);
	~Character();
	void recoverAP();
	void equip(AWeapon *weapon);
	void attack(Enemy *enemy);
	AWeapon const *	getWeapon() const;
	int		getAP() const;
	std::string const & getName() const;

};

std::ostream	&operator<<(std::ostream &o, Character const & chr);

#endif
