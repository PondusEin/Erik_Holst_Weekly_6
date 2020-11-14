#include "menu.h"

void task1()
{
	system("cls");
	std::cout << "Write a password to search for in the password files." << std::endl;
	std::string passwordString;
	do
	{
		std::cin.clear();
		if (std::cin.peek() == static_cast<int>('\n') || std::cin.peek() == static_cast<int>(' '))
		{
			std::cin.ignore(32767, '\n');
		}
		std::getline(std::cin, passwordString);
	} while (std::cin.fail());
	std::ifstream secretBaby("Baby.txt");
	std::string findPassword{ "" };
	int lineCounter{ 0 };
	while (secretBaby >> findPassword)
	{
		lineCounter++;
		if (findPassword == passwordString)
		{
			std::cout << "Password found at line: " << lineCounter << std::endl;
			std::cout << "The password is: " << findPassword << std::endl;
			break;
		}
	}
	secretBaby.close();
	system("pause");
}