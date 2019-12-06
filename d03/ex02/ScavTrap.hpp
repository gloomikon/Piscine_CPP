/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/06 22:43:49 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/06 22:56:19 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP
#define SCAV_TRAP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap(std::string name = "Bot");
	ScavTrap(ScavTrap const &cpy);
	~ScavTrap();

	void challengeNewcomer();
	ScavTrap &operator=(const ScavTrap &cpy);
};

#endif
