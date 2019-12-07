/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 19:40:15 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/07 19:40:15 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ISpaceMarine.hpp"

#ifndef ASSAULT_TERMINATOR
#define ASSAULT_TERMINATOR

class AssaultTerminator : public ISpaceMarine
{

public:
	AssaultTerminator();
	AssaultTerminator(AssaultTerminator const & sqd);
	void	operator=(AssaultTerminator const & sqd);
	~AssaultTerminator();
	AssaultTerminator* clone() const;
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;

};

#endif
