/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MiningBarge.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 19:47:32 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/07 19:47:32 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINING_BARGE
#define MINING_BARGE

#include "KoalaSteroid.hpp"
#include "StripMiner.hpp"
#include "DeepCoreMiner.hpp"
#include "AsteroKreog.hpp"

class MiningBarge
{
	IMiningLaser *laser[4];
public:
	MiningBarge();
	MiningBarge(MiningBarge const &bar);
	~MiningBarge();
	void	operator=(MiningBarge const &bar);
	void	equip(IMiningLaser* las);
	void	mine(IAsteroid* ast) const;
};

#endif
