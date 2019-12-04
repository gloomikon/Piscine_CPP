/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 22:48:02 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/03 22:54:38 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Pony.hpp"

void ponyOnTheHeap()
{
	Pony *ponyOnStack = new Pony();
	std::cout << "Pony on heap:" << std::endl
				<< "Name -\t" << ponyOnStack->getName() << std::endl
				<< "Age -\t" << ponyOnStack->getAge() << std::endl;
	delete ponyOnStack;
}

void ponyOnTheStack()
{
	Pony ponyOnHeap("Sleipnir", 10000);
	std::cout << "Pony on heap:" << std::endl
				<< "Name -\t" << ponyOnHeap.getName() << std::endl
				<< "Age -\t" << ponyOnHeap.getAge() << std::endl;
}

int		main()
{
	ponyOnTheHeap();
	ponyOnTheStack();
	return 0;
}