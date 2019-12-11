/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 13:03:08 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/11 13:22:50 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

std::string str_rand()
{
	std::string str = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890";
	std::string res;

	for (int i = 0; i < 8; ++i)
		res += str[rand() % str.size()];
	return res;
}

Data *deserialize(void *raw)
{
	return reinterpret_cast<Data *>(raw);
}

void *serialize()
{
	Data *dt = new Data;

	dt->s1 = str_rand();
	dt->n = rand();
	dt->s2 = str_rand();
	std::cout << "Before serialization:" << std::endl
			  << dt->s1 << std::endl
			  << dt->n << std::endl
			  << dt->s2 << std::endl;
	return reinterpret_cast<void *>(dt);
}

int main()
{

	srand(time(0) % rand());
	void *ser = serialize();
	Data *dat;
	dat = deserialize(ser);
	std::cout << "After deserialization:" << std::endl
			  << dat->s1 << std::endl
			  << dat->n << std::endl
			  << dat->s2 << std::endl;
	delete dat;
	return 0;
}
