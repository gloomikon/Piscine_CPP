#include "Brain.hpp"
#include <sstream>

Brain::Brain()
{
	this->thoughts = "no thoughts in this brain";
}

Brain::Brain(std::string thoughts)
{
	this->thoughts = thoughts;
}

Brain::~Brain()
{
}

std::string Brain::identify() const
{
	const void *location = static_cast<const void *>(this);
	std::stringstream adr;
	adr << location;
	std::string addres = adr.str();
	if (addres.length() > 2)
		for (size_t i = 2; i < addres.length(); i++)
			addres[i] = toupper(addres[i]);
	return (addres);
}
