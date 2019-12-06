/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/06 22:49:09 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/06 22:56:36 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : Level(1), Name(name)
{
	std::cout << "CLAP-TP " << name << " type ";
}

ClapTrap::ClapTrap(ClapTrap const &cpy)
{
	*this = cpy;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &cpy)
{
	this->typeCl = cpy.typeCl;
	this->Hit_points = cpy.Hit_points;
	this->Max_hit_points = cpy.Max_hit_points;
	this->Energy_points = cpy.Energy_points;
	this->Max_energy_points = cpy.Max_energy_points;
	this->Level = cpy.Level;
	this->Name = cpy.Name;
	this->Melee_attack_damage = cpy.Melee_attack_damage;
	this->Ranged_attack_damage = cpy.Ranged_attack_damage;
	this->Armor_damage_reduction = cpy.Armor_damage_reduction;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	if (this->typeCl != 4)
	{
		std::cout << "CLAP-TP (" + this->Name + ") destroed" << std::endl;
		std::cout << this->Name << ": \""
				  << "Bye bye"
				  << "\"" << std::endl;
	}
}

void ClapTrap::rangedAttack(std::string const &target)
{
	if (this->typeCl == 1)
		std::cout << "FR4G-TP (";
	else if (this->typeCl == 2)
		std::cout << "SCAV-TP (";
	else if (this->typeCl == 3)
		std::cout << "NINJA-TP (";
	else
		std::cout << "SP3R-TP (";
	std::cout << this->Name << ") attacks " << target << " at range, causing " << this->Ranged_attack_damage << " points of damage !" << std::endl;
	std::cout << this->Name << ": \""
			  << "He he" << std::endl;
}

void ClapTrap::meleeAttack(std::string const &target)
{
	if (this->typeCl == 1)
		std::cout << "FR4G-TP (";
	else if (this->typeCl == 2)
		std::cout << "SCAV-TP (";
	else if (this->typeCl == 3)
		std::cout << "NINJA-TP (";
	else
		std::cout << "SP3R-TP (";
	std::cout << this->Name << ") attacks " << target << " at melee, causing " << this->Melee_attack_damage << " points of damage !" << std::endl;
	std::cout << this->Name << ": \""
			  << "I'll crash you down!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	double absorption = 100 * ((double)this->Armor_damage_reduction / ((double)this->Armor_damage_reduction + 300));
	absorption = (1 - (absorption / 100)) * amount;
	if (absorption > this->Hit_points)
		this->Hit_points = 0;
	else
		this->Hit_points -= (int)absorption;
	if (this->typeCl == 1)
		std::cout << "FR4G-TP (";
	else if (this->typeCl == 2)
		std::cout << "SCAV-TP (";
	else if (this->typeCl == 3)
		std::cout << "NINJA-TP (";
	else
		std::cout << "SP3R-TP (";
	std::cout << this->Name << ") received " << (int)absorption << " points of damage (" << amount << " dmg with considering "
			  << Armor_damage_reduction << " armor damage reduction). He had " << this->Hit_points << " hp left!" << std::endl;
	std::cout << this->Name << ": \""
			  << "Ouch!"
			  << "\"" << std::endl;
	if (!this->Hit_points)
		this->~ClapTrap();
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if ((amount > this->Max_hit_points) || (this->Hit_points + amount > this->Max_hit_points))
		this->Hit_points = this->Max_hit_points;
	else
		this->Hit_points += amount;
	if (this->typeCl == 1)
		std::cout << "FR4G-TP (";
	else if (this->typeCl == 2)
		std::cout << "SCAV-TP (";
	else if (this->typeCl == 3)
		std::cout << "NINJA-TP (";
	else
		std::cout << "SP3R-TP (";
	std::cout << this->Name << ") repaired " << amount << " hit points. He has " << this->Hit_points << " hp!" << std::endl;
	std::cout << this->Name << ": \""
			  << "Yeap yeap"
			  << "\"" << std::endl;
}

std::string ClapTrap::getName() const
{
	return (this->Name);
}

void ClapTrap::setName(std::string nm)
{
	this->Name = nm;
}

unsigned int ClapTrap::getHp() const
{
	return (this->Hit_points);
}

unsigned int ClapTrap::getEp() const
{
	return (this->Energy_points);
}

unsigned int ClapTrap::getLvl() const
{
	return (this->Level);
}
