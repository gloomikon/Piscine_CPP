/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/13 20:23:25 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/13 21:21:44 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "mutantstack.hpp"

int main()
{

	{
		MutantStack<int> mstack;

		std::cout << std::endl;

		mstack.push(5);
		mstack.push(17);

		std::cout << mstack.top() << std::endl;

		std::cout << std::endl;

		mstack.pop();

		std::cout << mstack.size() << std::endl;

		std::cout << std::endl;

		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);

		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();

		++it;
		--it;

		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}

		std::stack<int> s(mstack);
	}

	std::cout << std::endl;
	{
		MutantStack<int> Stack;
		int max = 100;
		for (int i = 0; i < max; ++i)
			Stack.push(i);
		for (MutantStack<int>::iterator it = Stack.begin();
			 it != Stack.end();
			 ++it)
		{
			std::cout << *it << std::endl;
		}
	}
	return (0);
}
