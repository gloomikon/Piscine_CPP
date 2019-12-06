/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/06 22:54:41 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/06 22:54:44 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP
#define SCAV_TRAP

#include <iostream>
#include <ctime>
#include <cstdlib>

class ScavTrap
{
private:
	unsigned int Hit_points;
	static unsigned int Max_hit_points;
	unsigned int Energy_points;
	static unsigned int Max_energy_points;
	unsigned int Level;
	std::string Name;
	static unsigned int Melee_attack_damage;
	static unsigned int Ranged_attack_damage;
	static unsigned int Armor_damage_reduction;

public:
	ScavTrap();
	ScavTrap(std::string name = "Bot");
	ScavTrap(ScavTrap const &cpy);
	~ScavTrap();

	void rangedAttack(std::string const &target);
	void meleeAttack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void challengeNewcomer();
	void setName(std::string nm);
	ScavTrap &operator=(const ScavTrap &cpy);
	std::string getName() const;
	unsigned int getHp() const;
	unsigned int getEp() const;
	unsigned int getLvl() const;
};

#endif
