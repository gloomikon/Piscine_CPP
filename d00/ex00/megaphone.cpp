/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 12:47:53 by mzhurba           #+#    #+#             */
/*   Updated: 2019/11/28 22:26:54 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void	capitalize_string(std::string str) {
	for (std::string::size_type i = 0; i < str.size(); ++i) {
		std::cout << static_cast<char>(std::toupper(str.at(i)));
	}
}

int		main(int argc, char **argv) {
	if (argc == 1) {
		std:: cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}
	while (*(++argv)) {
		capitalize_string(*argv);
	}
	std::cout << std::endl;

	return 0;
}
