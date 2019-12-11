/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 13:21:13 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/11 13:21:13 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_A
#define CLASS_A

#include "Base.hpp"

class ClassA : public Base
{
public:
	ClassA();
	ClassA(ClassA const &cls);
	void operator=(ClassA const &cls);
	~ClassA();
};

#endif
