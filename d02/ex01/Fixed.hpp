/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 21:16:21 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/05 21:16:45 by mzhurba          ###   ########.fr       */
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
	int getRawBits() const;
	Fixed &operator=(Fixed const &f);
	void setRawBits(int const &val);
	float toFloat() const;
	int toInt() const;
};

std::ostream &operator<<(std::ostream &out, Fixed const &f);

#endif
