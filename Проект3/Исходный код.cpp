#include <iostream> 
#include <string>
#include <vector>
#include "Book.h"
#include "Labrary.h"



int main()
{
	Labrary labrary;
	Book a;
	std::string BookTitle, BookName;
	int BookYear;
	int k = 0;
	while (k != 4)
	{
		std::cout << "\nEnter:\n 1-push a book\n 2-see the book\n 3-delete a book\n";
		std::cin >> k;
		if (k == 1)
		{
			std::cout << "Enter:\n title\n author\n year\n";
			std::cin >> BookTitle >> BookName >> BookYear;
			labrary.PushBook(BookTitle, BookName, BookYear);
		}
		else
		{
			if (k == 2)
			{
				std::cout << "say the title\n";
				std::cin >> BookTitle;
				int n = labrary.Numbers(BookTitle);
				if (n == 0)
				{
					std::cout << "There is no such book" << std::endl;
				}
				else
				{
					for (int i = 1; i < n + 1; i++)
					{
						a = labrary.GetBook(BookTitle, i);
						std::cout << "title:" << a.GetTitle() << "\n autor:" << a.GetName() << "\n year:" << a.GetYear() << std::endl;
					}
				}
			}
			else
			{
				if (k == 3)
				{
					std::string BookTitle;
					int index;
					std::cout << "Enter book title\n";
					std::cin >> BookTitle;
					int n = labrary.Numbers(BookTitle);
					if (n == 0)
					{
						std::cout << "There is no such book" << std::endl;
					}
					else
					{
						for (int i = 1; i < n + 1; i++)
						{
							labrary.GetBook(BookTitle, i);
						}
						std::cout << n << "books were deleted" << std::endl;
					}

				}
				else
				{
					break;
				}
			}
		}
	}
}