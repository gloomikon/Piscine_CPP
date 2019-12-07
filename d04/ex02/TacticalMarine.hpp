/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 19:41:17 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/07 19:41:17 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ISpaceMarine.hpp"

#ifndef TACTICAL_MARINE
#define TACTICAL_MARINE

class TacticalMarine : public ISpaceMarine
{

public:
	TacticalMarine();
	TacticalMarine(TacticalMarine const & sqd);
	void	operator=(TacticalMarine const & sqd);
	~TacticalMarine();
	TacticalMarine* clone() const;
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;

};

#endif
