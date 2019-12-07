/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 19:26:51 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/07 19:26:51 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion") {
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const &cpy) : Enemy(80, "RadScorpion") {
	*this = cpy;
}

void	RadScorpion::operator=(const RadScorpion & cpy) {
	Enemy::operator=(cpy);
}

RadScorpion::~RadScorpion() {
	std::cout << "* SPROTCH *" << std::endl;
}
