/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 21:50:30 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/05 21:51:39 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int val;
	static const int fracBits;

public:
	Fixed();
	Fixed(int const val);
	Fixed(float const val);
	Fixed(Fixed const &f);
	~Fixed();

	Fixed &operator=(Fixed const &f);
	Fixed operator+(Fixed const &f);
	Fixed operator-(Fixed const &f);
	Fixed operator*(Fixed const &f);
	Fixed operator/(Fixed const &f);

	Fixed &operator++();
	Fixed operator++(int);
	Fixed &operator--();
	Fixed operator--(int);

	bool operator<(Fixed const &f);
	bool operator<=(Fixed const &f);
	bool operator>(Fixed const &f);
	bool operator>=(Fixed const &f);
	bool operator==(Fixed const &f);
	bool operator!=(Fixed const &f);

	static Fixed &min(Fixed &a, Fixed &b);
	static Fixed const &min(Fixed const &a, Fixed const &b);
	static Fixed &max(Fixed &a, Fixed &b);
	static Fixed const &max(Fixed const &a, Fixed const &b);

	int getRawBits() const;
	void setRawBits(int const &val);
	float toFloat() const;
	int toInt() const;
};

std::ostream &operator<<(std::ostream &out, Fixed const &f);

#endif
