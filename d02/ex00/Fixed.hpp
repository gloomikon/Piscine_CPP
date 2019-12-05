/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 20:20:35 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/05 20:24:15 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed
{

private:
	int val;
	static const int fracBits;

public:
	Fixed();
	Fixed(Fixed const &f);
	~Fixed();
	int getRawBits() const;
	void setRawBits(int const &val);
	Fixed &operator=(Fixed const &f);
};

#endif