/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/13 00:04:29 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/13 20:04:36 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <array>
#include <vector>
#include <deque>
#include <list>
#include <set>
#include <unordered_set>
#include "easyfind.hpp"

int main()
{

	std::array<int, 10> arr0 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	std::vector<int> arr1;
	std::deque<int> arr2;
	std::list<int> arr3;
	std::set<int> arr4;
	std::unordered_set<int> arr5;

	for (int i = 0; i < 10; ++i)
	{
		arr1.push_back(i + 1);
		arr2.push_back(i + 1);
		arr3.push_back(i + 1);
		arr4.insert(i + 1);
		arr5.insert(i + 1);
	}

	for (int i = 0; i < 15; ++i)
	{
		try
		{
			easyfind(arr0, i);
			easyfind(arr1, i);
			easyfind(arr2, i);
			easyfind(arr3, i);
			easyfind(arr4, i);
			easyfind(arr5, i);

			std::cout << i << " was found" << std::endl;
		}
		catch (std::string &e)
		{
			std::cout << e << std::endl;
		}
	}
	return (0);
}
