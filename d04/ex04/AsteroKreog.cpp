/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AsteroKreog.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 19:45:03 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/07 19:45:03 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AsteroKreog.hpp"

AsteroBocal::AsteroBocal() {}

AsteroBocal::AsteroBocal(AsteroBocal const &cpy) {
	(void)cpy;
}

AsteroBocal::~AsteroBocal() {}

void		AsteroBocal::operator=(AsteroBocal const &cpy) {
	(void)cpy;
}

std::string	AsteroBocal::beMined(DeepCoreMiner * las) const {
	(void)las;
	return "Thorite";
}

std::string	AsteroBocal::beMined(StripMiner * las) const {
	(void)las;
	return "Flavium";
}

std::string	AsteroBocal::getName() const {
	return "AsteroBocal";
}
