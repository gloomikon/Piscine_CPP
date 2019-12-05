/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 21:17:02 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/05 21:38:07 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include "Fixed.hpp"

const int Fixed::fracBits = 8;

Fixed::Fixed()
{
	this->val = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(Fixed const &f)
{
	std::cout << "Assignation operator called" << std::endl;
	this->val = f.getRawBits();
	return (*this);
}

Fixed::Fixed(Fixed const &f)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = f;
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->val);
}

void Fixed::setRawBits(int const &val)
{
	this->val = val;
}

float Fixed::toFloat() const
{
	return (this->val / (float)(1 << this->fracBits));
}

int Fixed::toInt() const
{
	return (this->val / (1 << this->fracBits));
}

std::ostream &operator<<(std::ostream &out, Fixed const &f)
{
	out << f.toFloat();
	return (out);
}

Fixed::Fixed(int const val)
{
	this->val = (val << this->fracBits);
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const val)
{
	this->val = (int)roundf(val * (1 << this->fracBits));
	std::cout << "Float constructor called" << std::endl;
}
