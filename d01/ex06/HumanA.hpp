/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 22:50:37 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/04 22:53:53 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <string>
#include "Weapon.hpp"

class HumanA
{
private:
	std::string name;
	Weapon *weapon;

public:
	HumanA();
	HumanA(std::string name, Weapon const &w);
	~HumanA();
	void attack();
	Weapon const &getWeapon();
};

#endif
