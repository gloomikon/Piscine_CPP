/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AsteroKreog.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 19:45:50 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/07 19:45:50 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASTERO_BOCAL
#define ASTERO_BOCAL

#include "IAsteroid.hpp"

class AsteroBocal : public IAsteroid
{
public:
	AsteroBocal();
	AsteroBocal(AsteroBocal const &cpy);
	~AsteroBocal();
	void		operator=(AsteroBocal const &cpy);
	std::string	beMined(DeepCoreMiner * las) const;
	std::string	beMined(StripMiner * las) const;
	std::string	getName() const;

};

#endif
