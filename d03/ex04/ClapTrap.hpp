/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/06 22:50:40 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/06 22:50:40 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Clap_TRAP
#define Clap_TRAP

#include <iostream>
#include <ctime>
#include <cstdlib>

class ClapTrap
{
protected:
	unsigned int typeCl;
	unsigned int Hit_points;
	unsigned int Max_hit_points;
	unsigned int Energy_points;
	unsigned int Max_energy_points;
	unsigned int Level;
	std::string Name;
	unsigned int Melee_attack_damage;
	unsigned int Ranged_attack_damage;
	unsigned int Armor_damage_reduction;

public:
	ClapTrap(std::string name = "Bot");
	ClapTrap(ClapTrap const &cpy);
	virtual ~ClapTrap();

	void rangedAttack(std::string const &target);
	void meleeAttack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void setName(std::string nm);
	ClapTrap &operator=(const ClapTrap &cpy);
	std::string getName() const;
	unsigned int getHp() const;
	unsigned int getEp() const;
	unsigned int getLvl() const;
};

#endif
