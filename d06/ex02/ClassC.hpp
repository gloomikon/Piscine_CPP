/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassC.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 13:21:48 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/11 13:21:48 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_C
#define CLASS_C

#include "Base.hpp"

class ClassC : public Base
{
public:
	ClassC();
	ClassC(ClassC const &cls);
	void operator=(ClassC const &cls);
	~ClassC();
};

#endif
