#pragma once
#include <string>
#ifndef Book.h

class Book {
public:
	Book(std::string BookTitle, std::string BookName, int BookYear);
	void SetTitle(std::string BookTitle);
	std::string GetTitle();
	void SetName(std::string BookName);
	std::string GetName();
	void SetYear(int BookYear);
	int GetYear();
	Book::Book();
	Book::~Book();
private:
	std::string title;
	//название книги
	std::string name;
	// имя автора
	int year;
	//год издания
};
#endif


