/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 23:02:47 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/04 23:05:00 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Logger.hpp"

int		main()
{
	Logger log("myLogFile.txt");

	log.log("console", "heare we have some loooooooooooog!!!");
	log.log("file", "heare 22 have some loooooooooooog!!!\n");
	log.log("console", "heare 33 have some loooooooooooog!!!\n");
	log.log("file", "heare 33 have some loooooooooooog!!!\n");
	log.log("file", "heare 33 have some loooooooooooog!!!\n");
	log.log("console", "heare 33 have some loooooooooooog!!!\n");
	return 0;
}
