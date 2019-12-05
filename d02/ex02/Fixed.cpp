/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 21:20:06 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/05 21:22:34 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include "Fixed.hpp"

const int Fixed::fracBits = 8;

Fixed::Fixed()
{
	this->val = 0;
}

Fixed::~Fixed()
{
}

Fixed &Fixed::operator=(Fixed const &f)
{
	this->val = f.getRawBits();
	return (*this);
}

Fixed::Fixed(Fixed const &f)
{
	*this = f;
}

int Fixed::getRawBits() const
{
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
}

Fixed::Fixed(float const val)
{
	this->val = (int)roundf(val * (1 << this->fracBits));
}

Fixed &Fixed::operator++()
{
	this->val++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	this->val++;
	return (tmp);
}

Fixed &Fixed::operator--()
{
	this->val--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	this->val--;
	return (tmp);
}

Fixed Fixed::operator+(Fixed const &f)
{
	return (Fixed(this->toFloat() + f.toFloat()));
}

Fixed Fixed::operator-(Fixed const &f)
{
	return (Fixed(this->toFloat() - f.toFloat()));
}

Fixed Fixed::operator*(Fixed const &f)
{
	return (Fixed(this->toFloat() * f.toFloat()));
}

Fixed Fixed::operator/(Fixed const &f)
{
	return (Fixed(this->toFloat() / f.toFloat()));
}

bool Fixed::operator<(Fixed const &f)
{
	return (this->toFloat() < f.toFloat());
}

bool Fixed::operator<=(Fixed const &f)
{
	return (this->toFloat() <= f.toFloat());
}

bool Fixed::operator>(Fixed const &f)
{
	return (this->toFloat() > f.toFloat());
}

bool Fixed::operator>=(Fixed const &f)
{
	return (this->toFloat() >= f.toFloat());
}

bool Fixed::operator==(Fixed const &f)
{
	return (this->toFloat() == f.toFloat());
}

bool Fixed::operator!=(Fixed const &f)
{
	return (this->toFloat() != f.toFloat());
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	return ((a < b) ? a : b);
}

Fixed const &Fixed::min(Fixed const &a, Fixed const &b)
{
	return (((Fixed)a < (Fixed)b) ? a : b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	return ((a > b) ? a : b);
}

Fixed const &Fixed::max(Fixed const &a, Fixed const &b)
{
	return (((Fixed)a > (Fixed)b) ? a : b);
}
