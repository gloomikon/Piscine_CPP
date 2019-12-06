/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/06 22:52:44 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/06 22:57:02 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name) : ClapTrap(name), NinjaTrap(name), FragTrap(name)
{
	this->typeCl = 4;
	this->Hit_points = 100;
	this->Max_hit_points = 100;
	this->Energy_points = 120;
	this->Max_energy_points = 120;
	this->Melee_attack_damage = 60;
	this->Ranged_attack_damage = 20;
	this->Armor_damage_reduction = 5;
	std::cout << "SP3R-TP created" << std::endl;
	std::cout << this->Name << ": \""
			  << "Hello"
			  << "\"" << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const &cpy) : ClapTrap(cpy), NinjaTrap(cpy), FragTrap(cpy)
{
	*this = cpy;
}

SuperTrap &SuperTrap::operator=(const SuperTrap &cpy)
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

SuperTrap::~SuperTrap()
{
	std::cout << "type SP3R-TP (came from NINJA-TP with FR4G-TP of CLAP-TP) "
			  << this->Name << " destroed" << std::endl;
	std::cout << this->Name << ": \""
			  << "Bye bye"
			  << "\"" << std::endl;
}
