/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/13 00:03:12 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/13 00:03:12 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
	Array<int> s(6);

	try {
		s[0] = 1301;
		s[1] = 4751;
		s[2] = 5492;
		s[3] = 611;
		s[4] = 401;
		s[5] = 510;
		s[6] = 666;
	} catch (std::exception &ex) {
		std::cout << ex.what() << std::endl;
	}

	std::cout << std::endl;

	for (unsigned int i = 0; i < s.size(); ++i) {
		std::cout << s[i] << std::endl;
	}

	std::cout << std::endl;

	Array<int> ar(s);

	s[2] = 8452;
	std::cout << s[2] << " != " << ar[2] << std::endl;

	std::cout << std::endl;

	Array<int> test = s;

	test[2] = 9999;

	std::cout << "s[2] = " << s[2] << " ar[2] = " << ar[2] << " test[2] = " << test[2] << std::endl;

	return 0;
}
