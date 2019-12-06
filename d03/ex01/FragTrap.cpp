/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/06 21:06:05 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/06 22:55:50 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

unsigned int FragTrap::Max_hit_points = 100;
unsigned int FragTrap::Max_energy_points = 100;
unsigned int FragTrap::Melee_attack_damage = 30;
unsigned int FragTrap::Ranged_attack_damage = 20;
unsigned int FragTrap::Armor_damage_reduction = 5;

FragTrap::FragTrap() {}

FragTrap::FragTrap(std::string name) : Hit_points(100), Energy_points(100), Level(1), Name(name)
{
	std::cout << "FR4G-TP (" + this->Name + ") created" << std::endl;
	std::cout << this->Name << ": \""
			  << "Hello"
			  << "\"" << std::endl;
}

FragTrap::FragTrap(FragTrap const &cpy)
{
	std::cout << &cpy << " is copied into " << this << std::endl;
	*this = cpy;
}

FragTrap &FragTrap::operator=(const FragTrap &cpy)
{
	this->Name = cpy.getName();
	this->Hit_points = cpy.getHp();
	this->Energy_points = cpy.getEp();
	this->Level = cpy.getLvl();
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FR4G-TP (" + this->Name + ") destroyed" << std::endl;
	std::cout << this->Name << ": \""
			  << "I WILL BE BACK!"
			  << "\"" << std::endl;
}

void FragTrap::rangedAttack(std::string const &target)
{
	std::cout << "FR4G-TP (" << this->Name << ") attacks " << target << " at range, causing " << this->Ranged_attack_damage << " points of damage !" << std::endl;
	std::cout << this->Name << ": \""
			  << "He he"
			  << "\"" << std::endl;
}

void FragTrap::meleeAttack(std::string const &target)
{
	std::cout << "FR4G-TP (" << this->Name << ") attacks " << target << " at melee, causing " << this->Melee_attack_damage << " points of damage !" << std::endl;
	std::cout << this->Name << ": \""
			  << "I'll crash you down!" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
	double absorption = 100 * ((double)this->Armor_damage_reduction / ((double)this->Armor_damage_reduction + 300));
	absorption = (1 - (absorption / 100)) * amount;
	(absorption > this->Hit_points) ? this->Hit_points = 0 : this->Hit_points -= (int)absorption;
	std::cout << "FR4G-TP (" << this->Name << ") received " << (int)absorption << " points of damage (" << amount << " dmg with considering "
			  << Armor_damage_reduction << " armor damage reduction). He had " << this->Hit_points << " hp left!" << std::endl;
	std::cout << this->Name << ": \""
			  << "It is all you can?"
			  << "\"" << std::endl;
	if (!this->Hit_points)
		this->~FragTrap();
}

void FragTrap::beRepaired(unsigned int amount)
{
	if ((amount > this->Max_hit_points) || (this->Hit_points + amount > this->Max_hit_points))
		this->Hit_points = this->Max_hit_points;
	else
		this->Hit_points += amount;
	std::cout << "FR4G-TP (" << this->Name << ") repaired " << amount << " hit points. He has " << this->Hit_points << " hp!" << std::endl;
	std::cout << this->Name << ": \""
			  << "Yeap yeap."
			  << "\"" << std::endl;
}

std::string FragTrap::getName() const
{
	return (this->Name);
}

void FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	std::string noenerg[10] = {"Where'd all my bullets go?", "Bullets are dumb.", "Who needs ammo anyway, am I right?", "I need tiny death pellets!",
							   "Need some ammo!", "Dangit, I'm out!", "Ammo reserves are spent!", "Crap, no more shots left!", "Hnngh! Empty!", "Coming up empty!"};
	std::string att[7] = {"Clap-In-The-Box", "Gun Wizard", "Pirate Ship Mode", "One Shot Wonder", "Laser Inferno", "Meat Unicycle", "Torgue Fiesta"};
	if (this->Energy_points < 25)
		std::cout << this->Name << ": \"" << noenerg[rand() % 10] << "\"" << std::endl;
	else
	{
		int i = rand() % 7;
		this->Energy_points -= 25;
		std::cout << this->Name + " use \"" << att[i] << "\" attack and his energy decreased by 25 points. There are only " << this->Energy_points << " energy left!" << std::endl;
		if (i < 5)
			rangedAttack(target);
		else
			meleeAttack(target);
	}
}

void FragTrap::setName(std::string nm)
{
	this->Name = nm;
}

unsigned int FragTrap::getHp() const
{
	return (this->Hit_points);
}

unsigned int FragTrap::getEp() const
{
	return (this->Energy_points);
}

unsigned int FragTrap::getLvl() const
{
	return (this->Level);
}
