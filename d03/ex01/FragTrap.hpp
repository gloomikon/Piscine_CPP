/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/06 21:19:17 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/06 22:55:53 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP
#define FRAG_TRAP

#include <iostream>
#include <ctime>
#include <cstdlib>

class FragTrap
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
	FragTrap();
	FragTrap(std::string name = "Bot");
	FragTrap(FragTrap const &cpy);
	~FragTrap();

	void rangedAttack(std::string const &target);
	void meleeAttack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void vaulthunter_dot_exe(std::string const &target);
	void setName(std::string nm);
	FragTrap &operator=(const FragTrap &cpy);
	std::string getName() const;
	unsigned int getHp() const;
	unsigned int getEp() const;
	unsigned int getLvl() const;
};

#endif
