/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassC.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 13:21:41 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/11 13:21:41 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassC.hpp"

ClassC::ClassC() {}

ClassC::ClassC(ClassC const &cls)
{
	(void)cls;
}

void ClassC::operator=(ClassC const &cls)
{
	(void)cls;
}

ClassC::~ClassC() {}
