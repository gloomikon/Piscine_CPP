/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 22:18:40 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/03 22:43:05 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
#define PONY_HPP

#include <string>

class Pony
{
private:
	std::string name;
	int age;

public:
	Pony();
	Pony(std::string name, int age);
	~Pony();
	std::string getName();
	void setName(std::string name);
	int getAge();
	void setAge(int age);
};

#endif