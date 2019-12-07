/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 19:23:49 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/07 19:23:49 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"

#ifndef AWEAPON_HPP
#define AWEAPON_HPP

#include <iostream>
#include <string>

class AWeapon
{
private:
	std::string	name;
	int			damage;
	int			ap;

public:
	AWeapon(std::string const & name, int apcost, int damage);
	AWeapon(AWeapon const &cpy);
	void	operator=(const AWeapon & cpy);
	virtual ~AWeapon();
	std::string const &	getName() const;
	int				getAPCost() const;
	int				getDamage() const;
	virtual void	attack() const = 0;

};

#endif
