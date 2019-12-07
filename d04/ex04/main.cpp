/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 19:47:00 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/07 19:47:00 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MiningBarge.hpp"

int main() {
	MiningBarge *barge = new MiningBarge();
	IAsteroid *ast1 = new BocalSteroid();
	IAsteroid *ast2 = new AsteroBocal();
	IMiningLaser *las1 = new DeepCoreMiner();
	IMiningLaser *las2 = new StripMiner();

	barge->mine(ast1);

	std::cout << std::endl;
	
	barge->equip(las1);
	barge->mine(ast2);

	std::cout << std::endl;

	barge->equip(las2);
	barge->mine(ast1);
	barge->mine(ast2);
	delete barge;
	delete ast1;
	delete ast2;
	delete las1;
	delete las2;
	return 0;
}
