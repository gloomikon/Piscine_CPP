/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 19:40:57 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/07 19:40:57 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ISquad.hpp"

#ifndef SQUAD_HPP
#define SQUAD_HPP

class Squad : public ISquad
{
	int				count;
	ISpaceMarine	**unit;

public:
	Squad();
	Squad(Squad const & sqd);
	void	operator=(Squad const & sqd);
	~Squad();
	int getCount() const;
	ISpaceMarine* getUnit(int nb) const;
	int push(ISpaceMarine* mar);

};

#endif
