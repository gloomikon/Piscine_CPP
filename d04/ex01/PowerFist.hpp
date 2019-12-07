/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 19:26:43 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/07 19:26:43 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWER_FIST
#define POWER_FIST

#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
public:
	PowerFist();
	PowerFist(PowerFist const &cpy);
	~PowerFist();
	void	attack() const;
	void	operator=(const PowerFist & cpy);
	
};

#endif
