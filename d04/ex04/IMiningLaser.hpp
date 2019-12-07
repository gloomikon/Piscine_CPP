/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMiningLaser.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 19:46:34 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/07 19:46:34 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINING_LAZER
#define MINING_LAZER

#include <iostream>
#include "IAsteroid.hpp"

class IAsteroid;

class IMiningLaser
{
public:
	virtual ~IMiningLaser() {}
	virtual void mine(IAsteroid*) = 0;
	
};

#endif
