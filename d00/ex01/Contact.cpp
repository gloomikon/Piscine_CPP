/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 15:29:25 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/02 21:27:47 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	this->firstname = "";
	this->lastname = "";
	this->nickname = "";
	this->login = "";
	this->postal_address = "";
	this->email_address = "";
	this->phone_number = "";
	this->birthday_date = "";
	this->favorite_meal = "";
	this->underwear_color = "";
	this->darkest_secret = "";
}

std::string Contact::getFirstname()
{
	return this->firstname;
}

void Contact::setFirstname(std::string firstname)
{
	this->firstname = firstname;
}

std::string Contact::getLastname()
{
	return this->lastname;
}

void Contact::setLastname(std::string lastname)
{
	this->lastname = lastname;
}

std::string Contact::getNickname()
{
	return this->nickname;
}

void Contact::setNickname(std::string nickname)
{
	this->nickname = nickname;
}

std::string Contact::getLogin()
{
	return this->login;
}

void Contact::setLogin(std::string login)
{
	this->login = login;
}

std::string Contact::getPostal_address()
{
	return this->postal_address;
}

void Contact::setPostal_address(std::string postal_address)
{
	this->postal_address = postal_address;
}

std::string Contact::getEmail_address()
{
	return this->email_address;
}

void Contact::setEmail_address(std::string email_address)
{
	this->email_address = email_address;
}

std::string Contact::getPhone_number()
{
	return this->phone_number;
}

void Contact::setPhone_number(std::string phone_number)
{
	this->phone_number = phone_number;
}

std::string Contact::getBirthday_date()
{
	return this->birthday_date;
}

void Contact::setBirthday_date(std::string birthday_date)
{
	this->birthday_date = birthday_date;
}

std::string Contact::getFavorite_meal()
{
	return this->favorite_meal;
}

void Contact::setFavorite_meal(std::string favorite_meal)
{
	this->favorite_meal = favorite_meal;
}

std::string Contact::getUnderwear_color()
{
	return this->underwear_color;
}

void Contact::setUnderwear_color(std::string underwear_color)
{
	this->underwear_color = underwear_color;
}

std::string Contact::getDarkest_secret()
{
	return this->darkest_secret;
}

void Contact::setDarkest_secret(std::string darkest_secret)
{
	this->darkest_secret = darkest_secret;
}

void Contact::printInfo()
{
	std::cout << "firstname: " << firstname << std::endl;
	std::cout << "lastname: " << lastname << std::endl;
	std::cout << "nickname: " << nickname << std::endl;
	std::cout << "login: " << login << std::endl;
	std::cout << "postal_address: " << postal_address << std::endl;
	std::cout << "email_address: " << email_address << std::endl;
	std::cout << "phone_number: " << phone_number << std::endl;
	std::cout << "birthday_date: " << birthday_date << std::endl;
	std::cout << "favorite_meal: " << favorite_meal << std::endl;
	std::cout << "underwear_color: " << underwear_color << std::endl;
	std::cout << "darkest_secret: " << darkest_secret << std::endl;
	std::cout << std::endl;
}

Contact::~Contact() {}
