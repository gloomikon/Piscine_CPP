/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 19:24:44 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/07 19:24:44 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"
#include "RadScorpion.hpp"

#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <iostream>
#include <string>

class Enemy
{
private:
	int			hp;
	std::string	type;

public:
	Enemy(int hp, std::string const & type);
	Enemy(Enemy const &cpy);
	void	operator=(const Enemy & cpy);
	virtual ~Enemy();
	std::string const & getType() const;
	int getHP() const;
	virtual void takeDamage(int dmg);
	
};

#endif
