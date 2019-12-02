/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 15:29:22 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/02 20:25:24 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{
private:
	std::string firstname;
	std::string lastname;
	std::string nickname;
	std::string login;
	std::string postal_address;
	std::string email_address;
	std::string phone_number;
	std::string birthday_date;
	std::string favorite_meal;
	std::string underwear_color;
	std::string darkest_secret;

public:
	Contact();
	std::string getFirstname();
	void setFirstname(std::string firstname);
	std::string getLastname();
	void setLastname(std::string lastname);
	void insertInfo(std::string name, std::string surname, std::string phone);
	bool isSimilar(std::string name, std::string surname, std::string phone);
	std::string getNickname();
	void setNickname(std::string nickname);
	std::string getLogin();
	void setLogin(std::string login);
	std::string getPostal_address();
	void setPostal_address(std::string postal_address);
	std::string getEmail_address();
	void setEmail_address(std::string email_address);
	std::string getPhone_number();
	void setPhone_number(std::string phone_number);
	std::string getBirthday_date();
	void setBirthday_date(std::string birthday_date);
	std::string getFavorite_meal();
	void setFavorite_meal(std::string favorite_meal);
	std::string getUnderwear_color();
	void setUnderwear_color(std::string underwear_color);
	std::string getDarkest_secret();
	void setDarkest_secret(std::string darkest_secret);

	void printInfo();
	~Contact();
};

#endif
