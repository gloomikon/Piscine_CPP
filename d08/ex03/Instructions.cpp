/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Instructions.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/14 15:06:45 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/14 15:06:46 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MindOpen.hpp"

IncrementPointer::IncrementPointer() {}
IncrementPointer::~IncrementPointer() {}

void IncrementPointer::execute(MindOpen::Program &prog) const
{
	++prog._ptr;
}

DecrementPointer::DecrementPointer() {}
DecrementPointer::~DecrementPointer() {}

void DecrementPointer::execute(MindOpen::Program &prog) const
{
	--prog._ptr;
}

IncrementByte::IncrementByte() {}
IncrementByte::~IncrementByte() {}

void IncrementByte::execute(MindOpen::Program &prog) const
{
	++(*prog._ptr);
}

DecrementByte::DecrementByte() {}
DecrementByte::~DecrementByte() {}

void DecrementByte::execute(MindOpen::Program &prog) const
{
	--(*prog._ptr);
}

PrintByte::PrintByte() {}
PrintByte::~PrintByte() {}

void PrintByte::execute(MindOpen::Program &prog) const
{
	std::cout << *prog._ptr;
}
