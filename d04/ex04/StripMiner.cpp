/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StripMiner.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 19:47:37 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/07 19:47:37 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "StripMiner.hpp"

StripMiner::StripMiner() {}

StripMiner::StripMiner(StripMiner const & cpy) {
	(void)cpy;
}

StripMiner::~StripMiner() {}

void	StripMiner::operator=(StripMiner const & cpy) {
	(void)cpy;
}

void	StripMiner::mine(IAsteroid* ast) {
	std::cout << "* strip mining ... got " << ast->beMined(this) << " ! *" << std::endl;
}
