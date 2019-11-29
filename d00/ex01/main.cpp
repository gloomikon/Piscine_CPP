#include "Contact.hpp"

bool add_contact(Contact contacts[], int *n) {
	std::string	name;
	std::string	surname;
	std::string	phone;

	if (*n == 8) {
		std::cout << "YOUR CONTACT BOOK IS FULL!" << std::endl;
		return false;
	}
	std::cout << "Name: ";
	std::cin >> name;
	std::cout << "Surname: ";
	std::cin >> surname;
	std::cout << "Phone: ";
	std::cin >> phone;
	contacts[*n].insertInfo(name, surname, phone);
	return true;
}

void search_contact(Contact contacts[], int n) {
	std::string	name;
	std::string	surname;
	std::string	phone;
	int			total = 0;

	std::cout << "Name: ";
	std::cin >> name;
	std::cout << "Surname: ";
	std::cin >> surname;
	std::cout << "Phone: ";
	std::cin >> phone;
	std::cout << std::endl << "FINDED CONTACTS:" << std::endl;

	for (int i = 0; i < n; ++i) {
		if (contacts[i].isSimilar(name, surname, phone)) {
			++total;
			contacts[i].printInfo();
			std::cout << std::endl;
		}
	}
	std::cout << std::endl << "TOTAL:" << total << std::endl;
}

int	parse_action(std::string action, Contact contacts[], int *n) {
	if (action == "EXIT") {
		return 0;
	}
	if (action == "SEARCH") {
		search_contact(contacts, *n);
		return 1;
	}
	if (action == "ADD") {
		if (add_contact(contacts, n)) {
			*n += 1;
			std::cout << "CONTACT ADDED SUCCESSFULLY" << std::endl;
		}
		return 2;
	}
	std::cout << "INVALID ACTION. IGNORED" << std::endl;
	return -1;
}

int	main() {
	Contact		contacts[8];
	std::string	action = "";
	int			n = 0;

	while (1301) {
		std::cout << "SELECT AN ACTION: ADD | SEARCH | EXIT\n> ";
		std::cin >> action;
		if (parse_action(action, contacts, &n) == 0)
			break;
	}


	return 0;
}