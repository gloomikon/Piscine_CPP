/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/06 22:35:09 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/06 22:55:13 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : Level(1), Name(name)
{
	std::cout << "CLAP-TP created " << name << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &cpy)
{
	std::cout << &cpy << " is copied into " << this << std::endl;
	*this = cpy;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &cpy)
{
	this->Name = cpy.getName();
	this->Hit_points = cpy.getHp();
	this->Energy_points = cpy.getEp();
	this->Level = cpy.getLvl();
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "CLAP-TP (" + this->Name + ") destroed" << std::endl;
}

void ClapTrap::rangedAttack(std::string const &target)
{
	if (this->typeCl == 1)
		std::cout << "FR4G-TP (";
	else
		std::cout << "SCAV-TP (";
	std::cout << this->Name << ") attacks " << target << " at range, causing " << this->Ranged_attack_damage << " points of damage !" << std::endl;
	std::cout << this->Name << ": \""
			  << "He he" << std::endl;
}

void ClapTrap::meleeAttack(std::string const &target)
{
	if (this->typeCl == 1)
		std::cout << "FR4G-TP (";
	else
		std::cout << "SCAV-TP (";
	std::cout << this->Name << ") attacks " << target << " at melee, causing " << this->Melee_attack_damage << " points of damage !" << std::endl;
	std::cout << this->Name << ": \""
			  << "I'll crash you down!"
			  << "\"" << std::endl;
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
	else
		std::cout << "SCAV-TP (";
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
	else
		std::cout << "SCAV-TP (";
	std::cout << this->Name << ") repaired " << amount << " hit points. He has " << this->Hit_points << " hp!" << std::endl;
	std::cout << this->Name << ": \""
			  << "Yeap yeah"
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
