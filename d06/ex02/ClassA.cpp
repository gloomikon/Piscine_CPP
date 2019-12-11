/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 13:21:07 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/11 13:21:07 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassA.hpp"

ClassA::ClassA() {}

ClassA::ClassA(ClassA const &cls)
{
	(void)cls;
}

void ClassA::operator=(ClassA const &cls)
{
	(void)cls;
}

ClassA::~ClassA() {}
