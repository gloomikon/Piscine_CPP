/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   KoalaSteroid.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 19:46:52 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/07 19:46:52 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BOCAL_STEROID
#define BOCAL_STEROID

#include "IAsteroid.hpp"

class BocalSteroid : public IAsteroid
{
public:
	BocalSteroid();
	BocalSteroid(BocalSteroid const &cpy);
	~BocalSteroid();
	void		operator=(BocalSteroid const &cpy);
	std::string	beMined(DeepCoreMiner * las) const;
	std::string	beMined(StripMiner * las) const;
	std::string	getName() const;

};

#endif
