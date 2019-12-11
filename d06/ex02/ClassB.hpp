/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 13:21:25 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/11 13:21:25 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_B
#define CLASS_B

#include "Base.hpp"

class ClassB : public Base
{
public:
	ClassB();
	ClassB(ClassB const &cls);
	void operator=(ClassB const &cls);
	~ClassB();
};

#endif
