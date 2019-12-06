/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/06 22:43:20 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/06 22:56:29 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJA_TRAP
#define NINJA_TRAP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap
{
public:
	NinjaTrap(std::string name = "Bot");
	NinjaTrap(NinjaTrap const &cpy);
	~NinjaTrap();

	NinjaTrap &operator=(const NinjaTrap &cpy);
	void ninjaShoebox(NinjaTrap &trap);
	void ninjaShoebox(ScavTrap &trap);
	void ninjaShoebox(FragTrap &trap);

private:
	int choise_att(std::string target);
};

#endif
