/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DeepCoreMiner.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 19:46:20 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/07 19:46:20 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEEP_CORE_MINER
#define DEEP_CORE_MINER

#include "IMiningLaser.hpp"

class DeepCoreMiner : public IMiningLaser
{
public:
	DeepCoreMiner();
	DeepCoreMiner(DeepCoreMiner const & cpy);
	~DeepCoreMiner();
	void	operator=(DeepCoreMiner const & cpy);
	void	mine(IAsteroid* ast);
	
};

#endif
