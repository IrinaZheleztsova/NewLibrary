#include "Labrary.h"
#include "Book.h"


Labrary::Labrary()
{
}
Labrary::~Labrary()
{
}

void Labrary::PushBook(std::string BookTitle, std::string BookName, int BookYear)
{
	
	a.SetTitle(BookTitle);
	a.SetName(BookName);
	a.SetYear(BookYear);
	books.push_back(a);
}

Book Labrary::GetBook(std::string BookTitle,int num)
{
	
	int n = books.size();
	int tick = 0;
	for (int i = 0; i < n; i++)
	{
		if (books[i].GetTitle() == BookTitle)
		{
			tick++;
			if (tick == num)
			{
				return books[i];
			}
		}
	}
}



void Labrary::SeeBook()
{

	int n = books.size();
	for (int i = 0; i < n; i++)
	{

		std::cout << "\nTitel-" << books[i].GetTitle() << "  Author-" << books[i].GetName() << "  Year-" << books[i].GetYear() << "\n";

	}
}

std::vector<Book>Labrary::DeliteBook(std::string BookTitle)
{
	int p = 0;
	int index;
	
	for (int i = 0; i < books.size(); i++)
	{	
		if (books[i].GetTitle() == BookTitle)
		{
			index = i;	
			books.erase(books.begin() + index);
			i--;
		}	
	}
	return books;
}

int Labrary::Numbers(std::string BookTitle){
	int p = 0;
	for (int i = 0; i < books.size(); i++){
		if (books[i].GetTitle() == BookTitle){
			p++;
		}
	}
	return p;
};






