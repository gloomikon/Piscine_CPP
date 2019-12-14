/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MindOpen.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhurba <mzhurba@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/13 21:24:20 by mzhurba           #+#    #+#             */
/*   Updated: 2019/12/13 21:26:16 by mzhurba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINDOPEN_HPP
#define MINDOPEN_HPP

#include <iostream>
#include <exception>
#include <queue>

typedef char Byte;

class MindOpen
{

public:
	struct AInstruction;
	struct Program;

	struct AInstruction
	{
		AInstruction(){};
		virtual ~AInstruction(){};
		virtual void execute(MindOpen::Program &) const = 0;
	};

	struct Program
	{
		Program(std::string Filename);
		~Program();

		std::queue<AInstruction *> _instructionQueue;

		std::string _filename;
		Byte *_init_ptr;
		Byte *_ptr;
		void execute();
	};

private:
	std::vector<Program> _programs;

public:
	MindOpen();
	~MindOpen();

	void load(std::string Filename);
	void execute(std::string Filename);
	void executeAll(void);

	struct FileNotFound : public std::exception
	{
		virtual const char *what() const throw();
	};

	struct InvalidFile : public std::exception
	{
		virtual const char *what() const throw();
	};
};

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */

struct IncrementPointer : public MindOpen::AInstruction
{

	IncrementPointer();
	~IncrementPointer();

	void execute(MindOpen::Program &) const;
};

struct DecrementPointer : public MindOpen::AInstruction
{

	DecrementPointer();
	~DecrementPointer();

	void execute(MindOpen::Program &) const;
};

struct IncrementByte : public MindOpen::AInstruction
{

	IncrementByte();
	~IncrementByte();

	void execute(MindOpen::Program &) const;
};

struct DecrementByte : public MindOpen::AInstruction
{

	DecrementByte();
	~DecrementByte();

	void execute(MindOpen::Program &) const;
};

struct PrintByte : public MindOpen::AInstruction
{

	PrintByte();
	~PrintByte();

	void execute(MindOpen::Program &) const;
};

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */

#endif /* MINDOPEN_HPP */
