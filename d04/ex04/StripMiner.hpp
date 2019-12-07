/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StripMiner.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 19:47:42 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/07 19:47:42 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRIP_MINER
#define STRIP_MINER

#include "IMiningLaser.hpp"

class StripMiner : public IMiningLaser
{
public:
	StripMiner();
	StripMiner(StripMiner const & cpy);
	~StripMiner();
	void	operator=(StripMiner const & cpy);
	void	mine(IAsteroid* ast);
	
};

#endif
