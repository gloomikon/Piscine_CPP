#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact {
	private:
		std::string name;
		std::string surname;
		std::string phone;

	public:
		Contact();
		Contact(std::string name, std::string surname, std::string phone);
		void insertInfo(std::string name, std::string surname, std::string phone);
		bool isSimilar(std::string name, std::string surname, std::string phone);
		void printInfo();
		~Contact();
};

#endif
