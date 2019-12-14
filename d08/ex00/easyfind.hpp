/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/13 00:04:10 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/13 19:48:24 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <string>
#include <algorithm>

template < typename T >
void easyfind( T container , int target ) {

	if (std::find(container.begin(), container.end(), target) == container.end())
		throw "ERROR: " + std::to_string(target) + " not found!";
}

#endif
