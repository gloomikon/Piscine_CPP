/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PredictionsMonitore.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/15 17:34:11 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/15 23:32:34 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PredictionsMonitore.hpp"

PredictionsMonitore::PredictionsMonitore()
{
	this->active = true;
}

PredictionsMonitore::~PredictionsMonitore() {}

void PredictionsMonitore::updateData()
{
	if (!this->active)
	{
		this->data = "Disabled";
		return;
	}
	static unsigned int i = 0;
	const std::string arr[] = {
		"in short moments - a lot of power",
		"you are doing great - just stop stopping",
		"you're best of the best, on the north, on the west",
		"lie to liars, steal from thieves",
		"if you don't stand for something, you fall for everything",
		"first thought — best thought",
		"to be reborn, you have to die first"};
	if (i / 3 == 7)
		i = 0;
	this->data = arr[(i / 3) % 7];
	++i;
}

std::string PredictionsMonitore::getModuleName()
{
	return "RANDOM SAYING";
}

PredictionsMonitore::PredictionsMonitore(PredictionsMonitore const &sqd)
{
	(void)sqd;
}

void PredictionsMonitore::operator=(PredictionsMonitore const &sqd)
{
	(void)sqd;
}