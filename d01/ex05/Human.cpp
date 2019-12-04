/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 22:41:19 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/04 22:44:41 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human()
{

}

Human::~Human()
{

}

Brain const & Human::getBrain() const
{
	return (this->brain);
}

std::string Human::identify() const
{
	return (this->brain.identify());
}
