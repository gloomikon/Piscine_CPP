/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/06 22:52:14 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/06 22:57:03 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
#ifndef SUPER_TRAP
#define SUPER_TRAP

#include "NinjaTrap.hpp"

class SuperTrap : public NinjaTrap, public FragTrap
{
public:
	SuperTrap(std::string name = "Bot");
	SuperTrap(SuperTrap const &cpy);
	~SuperTrap();

	SuperTrap &operator=(const SuperTrap &cpy);
};

#endif
