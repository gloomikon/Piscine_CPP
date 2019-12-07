/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   KoalaSteroid.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 19:46:43 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/07 19:46:43 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "KoalaSteroid.hpp"

BocalSteroid::BocalSteroid() {}

BocalSteroid::BocalSteroid(BocalSteroid const &cpy) {
	(void)cpy;
}

BocalSteroid::~BocalSteroid() {}

void		BocalSteroid::operator=(BocalSteroid const &cpy) {
	(void)cpy;
}

std::string	BocalSteroid::beMined(DeepCoreMiner * las) const {
	(void)las;
	return "Zazium";
}

std::string	BocalSteroid::beMined(StripMiner * las) const {
	(void)las;
	return "Krpite";
}

std::string	BocalSteroid::getName() const {
	return "BocalSteroid";
}
