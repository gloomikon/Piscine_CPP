/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 15:29:16 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/02 21:33:41 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

bool add_contact(Contact contacts[], int *n)
{
	std::string input;

	if (*n == 8)
	{
		std::cout << "YOUR CONTACT BOOK IS FULL!" << std::endl;
		return false;
	}
	std::cout << "Enter firstname: ";
	std::cin >> input;
	if (std::cin.eof())
	{
		return false;
	}
	contacts[*n].setFirstname(input);
	std::cout << "Enter lastname: ";
	std::cin >> input;
	if (std::cin.eof())
	{
		return false;
	}
	contacts[*n].setLastname(input);
	std::cout << "Enter nickname: ";
	std::cin >> input;
	if (std::cin.eof())
	{
		return false;
	}
	contacts[*n].setNickname(input);
	std::cout << "Enter login: ";
	std::cin >> input;
	if (std::cin.eof())
	{
		return false;
	}
	contacts[*n].setLogin(input);
	std::cout << "Enter postal_address: ";
	std::cin >> input;
	if (std::cin.eof())
	{
		return false;
	}
	contacts[*n].setPostal_address(input);
	std::cout << "Enter email_address: ";
	std::cin >> input;
	if (std::cin.eof())
	{
		return false;
	}
	contacts[*n].setEmail_address(input);
	std::cout << "Enter phone_number: ";
	std::cin >> input;
	if (std::cin.eof())
	{
		return false;
	}
	contacts[*n].setPhone_number(input);
	std::cout << "Enter birthday_date: ";
	std::cin >> input;
	if (std::cin.eof())
	{
		return false;
	}
	contacts[*n].setBirthday_date(input);
	std::cout << "Enter favorite_meal: ";
	std::cin >> input;
	if (std::cin.eof())
	{
		return false;
	}
	contacts[*n].setFavorite_meal(input);
	std::cout << "Enter underwear_color: ";
	std::cin >> input;
	if (std::cin.eof())
	{
		return false;
	}
	contacts[*n].setUnderwear_color(input);
	std::cout << "Enter darkest_secret: ";
	std::cin >> input;
	if (std::cin.eof())
	{
		return false;
	}
	contacts[*n].setDarkest_secret(input);
	return true;
}

std::string check_length(std::string str)
{
	int a = str.length();

	if (a > 10)
	{
		str.erase(9, a);
		std::cout << str;
		return (".");
	}
	while (a++ < 10)
		std::cout << " ";
	return (str);
}

void search_contact(Contact contacts[], int n)
{
	int index;
	std::string output;

	if (n == 0)
	{
		std::cout << "YOU HAVE NO CONTACTS" << std::endl;
		return;
	}
	std::cout << "|     INDEX|FIRST NAME| LAST NAME|  NICKNAME|" << std::endl;
	for (int i = 0; i < n; ++i)
	{
		std::cout << "|         " << (i + 1) << "|";
		output = check_length(contacts[i].getFirstname());
		std::cout << output << "|";
		output = check_length(contacts[i].getLastname());
		std::cout << output << "|";
		output = check_length(contacts[i].getNickname());
		std::cout << output << "|";
		std::cout << std::endl;
	}
	std::cout << std::endl;
	std::cout << "Enter an index: " << std::endl;
	std::cin >> index;
	if (std::cin.eof())
	{
		return;
	}
	if (std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore();
		std::cout << "INVALID INDEX!" << std::endl;
	}
	if (index - 1 < n)
	{
		contacts[index - 1].printInfo();
	}
	else
	{
		std::cout << "INDEX OUT OF RANGE!" << std::endl;
	}
}

int parse_action(std::string action, Contact contacts[], int *n)
{
	if (action == "EXIT")
	{
		return 0;
	}
	if (action == "SEARCH")
	{
		search_contact(contacts, *n);
		return 1;
	}
	if (action == "ADD")
	{
		if (add_contact(contacts, n))
		{
			*n += 1;
			std::cout << "CONTACT ADDED SUCCESSFULLY" << std::endl;
		}
		return 2;
	}
	std::cout << "INVALID ACTION. IGNORED" << std::endl;
	return -1;
}

int main()
{
	Contact contacts[8];
	std::string action = "";
	int n = 0;

	while (1301)
	{
		std::cout << "SELECT AN ACTION: ADD | SEARCH | EXIT\n> ";
		std::cin >> action;
		if (std::cin.eof())
		{
			return 0;
		}
		if (parse_action(action, contacts, &n) == 0)
			break;
	}

	return 0;
}