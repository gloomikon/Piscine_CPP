/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/12 23:45:53 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/12 23:45:53 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

template <typename T>
void printWithBrackets(T const &c)
{
	std::cout << "[" << c << "]" << " ";
}

template <typename T, class U>
void iter(T *arr, size_t sz, U *fun)
{
	for (size_t i = 0; i < sz; ++i)
		fun(arr[i]);
}

int main()
{
	std::string s[3] = {"Bethany", "Tusen", "1301"};
	int i[4] = {4761, 5492, 1301, 611};

	iter(s, 3, &printWithBrackets<std::string>);
	std::cout << std::endl;
	iter(i, 4, &printWithBrackets<int>);
	std::cout << std::endl;

	return 0;
}
