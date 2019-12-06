/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/06 22:39:00 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/06 22:55:31 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP
#define FRAG_TRAP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	FragTrap(std::string name = "Bot");
	FragTrap(FragTrap const &cpy);
	~FragTrap();

	void vaulthunter_dot_exe(std::string const &target);
	FragTrap &operator=(const FragTrap &cpy);
};

#endif
