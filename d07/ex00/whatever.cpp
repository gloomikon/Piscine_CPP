/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/12 23:38:50 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/12 23:38:50 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

template <typename T>
void swap(T &a, T &b)
{
	T tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T const &min(T const &a, T const &b)
{
	return (a < b ? a : b);
}

template <typename T>
T const &max(T const &a, T const &b)
{
	return (a > b ? a : b);
}

int main()
{
	{
		int a = 2;
		int b = 3;

		::swap(a, b);
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
		std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;

		std::string c = "chaine1";
		std::string d = "chaine2";

		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
		std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;
	}
	std::cout << std::endl;
	{
		float a = 21.42f;
		float b = 42.21f;
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "Before swap a = " << a << ", b = " << b << std::endl;
		swap(a, b);
		std::cout << "After swap a = " << a << ", b = " << b << std::endl;

		std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
		std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;

		char c = 'a';
		char d = 'z';
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "Before swap c = " << c << ", d = " << d << std::endl;
		swap(c, d);
		std::cout << "After swap с = " << c << ", d = " << d << std::endl;

		std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
		std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;
	}
	return 0;
}
