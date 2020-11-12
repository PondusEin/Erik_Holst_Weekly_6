#include "menu.h"



void task1()
{
	std::string passwordString;
	system("cls");
	std::cout << "The password is:" << std::endl;
	std::string wifiPassword = passwordString;
	do
	{
		std::cin.clear();
		std::cin.ignore();
		std::getline(std::cin, passwordString);
	} while (std::cin.fail());
	std::ifstream secretBaby("Baby.txt");
	if (!secretBaby.eof())
	{
		
	}
	secretBaby.close();
	system("pause");
}