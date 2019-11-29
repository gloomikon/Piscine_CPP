/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 15:29:25 by mzhurba           #+#    #+#             */
/*   Updated: 2019/11/29 15:29:25 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(std::string name, std::string surname, std::string phone) {
	this->name = name;
	this->surname = surname;
	this->phone = phone;
}

Contact::Contact() {
	this->name = "";
	this->surname = "";
	this->phone = "";
}

void Contact::insertInfo(std::string name, std::string surname, std::string phone) {
	this->name = name;
	this->surname = surname;
	this->phone = phone;
}

bool Contact::isSimilar(std::string name, std::string surname, std::string phone) {
	return (this->name.find(name) != std::string::npos
	&& this->surname.find(surname) != std::string::npos
	&& this->phone.find(phone) != std::string::npos);
}

void Contact::printInfo() {
	std::cout << "Name: " << name << std::endl
			<< "Surname: " << surname << std::endl
			<< "Phone: " << phone << std::endl; 
}

Contact::~Contact() {}
