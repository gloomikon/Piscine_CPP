/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 13:21:57 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/11 13:21:57 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassA.hpp"
#include "ClassB.hpp"
#include "ClassC.hpp"

Base *generate(void)
{
	int i = rand() % 3;

	switch (i)
	{
	case 0:
		std::cout << "The real class is A" << std::endl;
		return new ClassA();
		break;
	case 1:
		std::cout << "The real class is B" << std::endl;
		return new ClassB();
		break;
	case 2:
		std::cout << "The real class is C" << std::endl;
		return new ClassC();
		break;
	default:
		return nullptr;
	}
}

void identify_from_pointer(Base *p)
{
	if (dynamic_cast<ClassA *>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<ClassB *>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<ClassC *>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "Error" << std::endl;
}

void identify_from_reference(Base &p)
{
	if (dynamic_cast<ClassA *>(&p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<ClassB *>(&p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<ClassC *>(&p))
		std::cout << "C" << std::endl;
	else
		std::cout << "Error" << std::endl;
}

int main()
{
	srand(time(0));
	Base *bs = generate();

	std::cout << "Identifying class from pointer: ";
	identify_from_pointer(bs);

	std::cout << "Identifying class from reference: ";
	identify_from_reference(*bs);

	delete bs;
	return 0;
}
