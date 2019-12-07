/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DeepCoreMiner.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 19:46:13 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/07 19:46:13 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DeepCoreMiner.hpp"

DeepCoreMiner::DeepCoreMiner() {}

DeepCoreMiner::DeepCoreMiner(DeepCoreMiner const & cpy) {
	(void)cpy;
}

DeepCoreMiner::~DeepCoreMiner() {}

void	DeepCoreMiner::operator=(DeepCoreMiner const & cpy) {
	(void)cpy;
}

void	DeepCoreMiner::mine(IAsteroid* ast) {
	std::cout << "* mining deep ... got " << ast->beMined(this) << " ! *" << std::endl;
}
