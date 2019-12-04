/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 22:48:14 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/03 22:50:05 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Pony.hpp"

Pony::Pony()
{
	this->name = "default";
	this->age = 1;
}

Pony::Pony(std::string name, int age)
{
	this->name = name;
	this->age = age;
}

Pony::~Pony()
{
	std::cout << "Pony destructor" << std::endl;
}

int Pony::getAge()
{
	return (this->age);
}

void Pony::setAge(int age)
{
	this->age = age;
}

std::string Pony::getName()
{
	return (this->name);
}

void Pony::setName(std::string name)
{
	this->name = name;
}