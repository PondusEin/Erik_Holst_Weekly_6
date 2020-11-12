// Erik_Holst_Weekly_6.cpp
#include "Menu.h"
#include <iostream>

int main()
{
	int input;
	while (true)
	{
		system("cls");
		std::cout << "Welcome to weekly 6. This assignment is to show how to utilize files.\n\tBy Erik Holst\n"<< std::endl;
		std::cout << "Task 1: Hack wifi password." << std::endl;
		std::cout << "Task 2: Student exam results." << std::endl;
		std::cout << "Task 3: Search a word in story. " << std::endl;
		std::cout << "Task 4: Copy a .txt to an empty .txt file." << std::endl;
		std::cout << "Task 5: Quit the terminal." << std::endl;
		std::cin >> input;
		while (std::cin.fail()) {
			std::cin.clear();
			std::cin.ignore(32767, '\n');
			std::cin >> input;
		}
		switch (input)
		{
		case 1:
			task1();
			break;
		case 2:
			task2();
			break;
		case 3:
			task3();
			break;
		case 4:
			task4();
			break;
		case 5:
			return 0;
		default:
			break;
		}
	}
}