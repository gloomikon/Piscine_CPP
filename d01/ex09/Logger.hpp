/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 23:02:16 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/04 23:02:26 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOGGER_HPP
#define LOGGER_HPP

#include <string>

class Logger
{
private:
	void logToConsole(std::string const &s);
	void logToFile(std::string const &s);
	std::string get_curTime();
	std::string makeLogEntry(std::string const &s);
	std::string fname;

public:
	Logger();
	Logger(std::string const &fName);
	~Logger();
	void log(std::string const &dest, std::string const &message);
};

#endif
