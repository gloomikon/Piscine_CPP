/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Program.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/14 15:18:37 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/14 15:18:38 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MindOpen.hpp"

MindOpen::Program::Program(std::string Filename) : _filename(Filename)
{
}

MindOpen::Program::~Program() {}

void MindOpen::Program::execute()
{

	AInstruction *tmp;

	while (!_instructionQueue.empty())
	{
		tmp = _instructionQueue.front();
		tmp->execute(*this);
		delete tmp;
		_instructionQueue.pop();
	}
	delete _init_ptr;
}
