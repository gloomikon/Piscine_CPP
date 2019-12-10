/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 23:43:48 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/10 23:43:48 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "OfficeBlock.hpp"

OfficeBlock::OfficeBlock() {
	this->inr = 0;
	this->sign = 0;
	this->exec = 0;
}

OfficeBlock::OfficeBlock(Intern *inr, Bureaucrat *sigBur, Bureaucrat *exBur) :
	inr(inr), sign(sigBur), exec(exBur) {}

OfficeBlock::~OfficeBlock() {}

void	OfficeBlock::setIntern(Intern *inr) {
	this->inr = inr;
}

void	OfficeBlock::setSigningBureaucrat(Bureaucrat *sigBur) {
	this->sign = sigBur;
}

void	OfficeBlock::setExecutingBureaucrat(Bureaucrat *exBur) {
	this->exec = exBur;
}

char const	*OfficeBlock::NotThreeSpotsException::what() const throw() {
	return "not enough intern and/or bureaucrat";
}

void	OfficeBlock::doBureaucracy(std::string form, std::string target) {
	if (!this->inr || ! this->sign || !this->exec)
		throw OfficeBlock::NotThreeSpotsException();
	Form	*frm;
	frm = this->inr->makeForm(form, target);
	try {
		this->sign->signForm(*frm);
		this->exec->executeForm(*frm);
	}
	catch (std::exception & ex) {
		delete frm;
		frm = nullptr;
	}
	if (frm != nullptr)
		delete frm;
}
