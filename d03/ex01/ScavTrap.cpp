/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/06 22:03:16 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/06 22:55:57 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

unsigned int ScavTrap::Max_hit_points = 100;
unsigned int ScavTrap::Max_energy_points = 50;
unsigned int ScavTrap::Melee_attack_damage = 20;
unsigned int ScavTrap::Ranged_attack_damage = 15;
unsigned int ScavTrap::Armor_damage_reduction = 3;

ScavTrap::ScavTrap() {}

ScavTrap::ScavTrap(std::string name) : Hit_points(100), Energy_points(100), Level(1), Name(name)
{
	std::cout << "SCAV-TP (" + this->Name + ") created" << std::endl;
	std::cout << this->Name << ": \""
			  << "Hello"
			  << "\"" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &cpy)
{
	std::cout << &cpy << " is copied into " << this << std::endl;
	*this = cpy;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &cpy)
{
	this->Name = cpy.getName();
	this->Hit_points = cpy.getHp();
	this->Energy_points = cpy.getEp();
	this->Level = cpy.getLvl();
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "SCAV-TP (" + this->Name + ") destroed" << std::endl;
	std::cout << this->Name << ": \""
			  << "I WILL BE BACK!"
			  << "\"" << std::endl;
}

void ScavTrap::rangedAttack(std::string const &target)
{
	std::cout << "SCAV-TP (" << this->Name << ") attacks " << target << " at range, causing " << this->Ranged_attack_damage << " points of damage !" << std::endl;
	std::cout << this->Name << ": \""
			  << "He he"
			  << "\"" << std::endl;
}

void ScavTrap::meleeAttack(std::string const &target)
{
	std::cout << "SCAV-TP (" << this->Name << ") attacks " << target << " at melee, causing " << this->Melee_attack_damage << " points of damage !" << std::endl;
	std::cout << this->Name << ": \""
			  << "I'll crash you down!" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
	double absorption = 100 * ((double)this->Armor_damage_reduction / ((double)this->Armor_damage_reduction + 300));
	absorption = (1 - (absorption / 100)) * amount;
	(absorption > this->Hit_points) ? this->Hit_points = 0 : this->Hit_points -= (int)absorption;
	std::cout << "SCAV-TP (" << this->Name << ") received " << (int)absorption << " points of damage (" << amount << " dmg with considering "
			  << Armor_damage_reduction << " armor damage reduction). He had " << this->Hit_points << " hp left!" << std::endl;
	std::cout << this->Name << ": \""
			  << "It is all you can?"
			  << "\"" << std::endl;
	if (!this->Hit_points)
		this->~ScavTrap();
}

void ScavTrap::beRepaired(unsigned int amount)
{
	if ((amount > this->Max_hit_points) || (this->Hit_points + amount > this->Max_hit_points))
		this->Hit_points = this->Max_hit_points;
	else
		this->Hit_points += amount;
	std::cout << "SCAV-TP (" << this->Name << ") repaired " << amount << " hit points. He has " << this->Hit_points << " hp!" << std::endl;
	std::cout << this->Name << ": \""
			  << "Yeap yeap."
			  << "\"" << std::endl;
}

std::string ScavTrap::getName() const
{
	return (this->Name);
}

void ScavTrap::setName(std::string nm)
{
	this->Name = nm;
}

unsigned int ScavTrap::getHp() const
{
	return (this->Hit_points);
}

unsigned int ScavTrap::getEp() const
{
	return (this->Energy_points);
}

unsigned int ScavTrap::getLvl() const
{
	return (this->Level);
}

void ScavTrap::challengeNewcomer()
{
	std::string act[8] = {"Miniontrap", "Funzerker", "Mechromagician", "Shhhh... Trap!", "Blight Bot", "Rubber Ducky", "Senseless Sacrifice", "Medbot"};
	std::string tk[8] = {"Claptrap throws out a Turrettrap that shoots explosive rockets (similar to Axton's Sabre Turret) and wields a Dahl assault rifle, periodically \
shooting powerful non-elemental bullets at its chosen target.",
						 "Claptrap receives a copy of his currently equipped weapon in his other clamp, mimicking Salvador's Gunzerking ability.",
						 "Claptrap summons a Punkbot, which engages enemies in combat in a similar fashion to Gaige's Deathtrap.", "Claptrap deploys a Holotrap and becomes invisible, similar to Zer0's \
Decepti0n ability.",
						 "Claptrap summons a Sirentrap emitting an acid gas and with fire wings on its back, which proceeds to fly around enemies dealing incendiary and corrosive damage, \
similar to Maya's Blight Phoenix skill.",
						 "Claptrap will continually bounce into the air and gain bullet reflection.", "Claptrap forces himself into Fight For Your Life to revive all \
other team members that are currently in Fight For Your Life.",
						 "Claptrap gains drastically increased movement speed and a healing laser that he can use to restore teammate and enemy health."};
	int i = rand() % 8;
	std::cout << this->Name + " use " << act[i] << " : " << tk[i] << std::endl;
}
