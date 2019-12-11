/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 13:21:18 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/11 13:21:18 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassB.hpp"

ClassB::ClassB() {}

ClassB::ClassB(ClassB const &cls)
{
	(void)cls;
}

void ClassB::operator=(ClassB const &cls)
{
	(void)cls;
}

ClassB::~ClassB() {}
