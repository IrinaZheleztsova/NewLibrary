#pragma once
#include <iostream> 
#include <string>
#include <vector>
#include "Book.h"
#ifndef Labrary.h


class Labrary{
private:
	std::vector<Book>books;
	std::vector<Book>newbooks;
	Book a;
public:
	Labrary::Labrary();
	Labrary::~Labrary();
	void PushBook(std::string BookTitle, std::string BookName, int BookYear);
	Book GetBook(std::string BookTitle, int num);
	int Numbers(std::string BookTitle);
	std::vector<Book>DeliteBook(std::string BookTitle);
	void SeeBook();
};
#endif

