/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 19:27:27 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/07 19:27:27 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPER_MUTANT
#define SUPER_MUTANT

#include "Enemy.hpp"

class SuperMutant : public Enemy
{
public:
	SuperMutant();
	SuperMutant(SuperMutant const &cpy);
	void	operator=(const SuperMutant & cpy);
	~SuperMutant();
	void takeDamage(int dmg);
	
};

#endif
