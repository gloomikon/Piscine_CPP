/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IAsteroid.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 19:46:29 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/07 19:46:29 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IASTEROID_HPP
#define IASTEROID_HPP

#include <string>

class DeepCoreMiner;
class StripMiner;

class IAsteroid
{
public:
	virtual ~IAsteroid() {}
	virtual std::string beMined(DeepCoreMiner *) const = 0;
	virtual std::string beMined(StripMiner *) const = 0;
	virtual std::string getName() const = 0;

};

#endif
