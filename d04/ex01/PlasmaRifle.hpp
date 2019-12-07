/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 19:26:05 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/07 19:26:05 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMA_RIFLE
#define PLASMA_RIFLE

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
public:
	PlasmaRifle();
	PlasmaRifle(PlasmaRifle const &cpy);
	~PlasmaRifle();
	void	attack() const;
	void	operator=(const PlasmaRifle & cpy);
	
};

#endif
