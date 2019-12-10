/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 00:15:57 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/11 00:15:57 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CentralBureaucracy.hpp"

int main() {

	srand(time(0));

	CentralBureaucracy	centr;
	Bureaucrat			bur1("Kolumbia", 50);
	Bureaucrat			bur2("Bethany Tusen", 110);
	Bureaucrat			bur3("Moonsinger", 78);
	Bureaucrat			bur4("MrAmsterdam", 4);
	Bureaucrat			bur5("gloomikon", 2);
	Bureaucrat			bur6("0.001", 5);


	centr.feed(&bur1);
	centr.feed(&bur2);
	centr.feed(&bur3);
	centr.feed(&bur4);
	centr.feed(&bur5);
	centr.feed(&bur6);
	centr.feed(&bur1);
	centr.feed(&bur2);
	centr.feed(&bur3);
	centr.feed(&bur4);
	centr.feed(&bur5);
	centr.feed(&bur6);
	centr.feed(&bur1);
	centr.feed(&bur2);
	centr.feed(&bur3);
	centr.feed(&bur4);
	centr.feed(&bur5);
	centr.feed(&bur6);
	centr.feed(&bur3);
	centr.feed(&bur5);

	centr.queueUp("01");
	centr.queueUp("02");
	centr.queueUp("03");
	centr.queueUp("04");
	centr.queueUp("05");
	centr.queueUp("06");
	centr.queueUp("07");
	centr.queueUp("08");
	centr.queueUp("09");
	centr.queueUp("10");
	centr.queueUp("11");
	centr.queueUp("12");
	centr.queueUp("13");
	centr.queueUp("14");
	centr.queueUp("15");
	centr.queueUp("16");
	centr.queueUp("17");
	centr.queueUp("18");
	centr.queueUp("19");
	centr.queueUp("20");
	centr.queueUp("21");
	centr.queueUp("22");
	centr.queueUp("23");
	centr.queueUp("24");
	centr.queueUp("25");
	centr.queueUp("26");
	centr.queueUp("27");
	centr.queueUp("28");
	centr.queueUp("29");
	centr.queueUp("30");
	centr.queueUp("Overflow test");

	centr.doBureaucracy();

	return 0;
}
