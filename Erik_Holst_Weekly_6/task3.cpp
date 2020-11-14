#include "menu.h"
void task3()
{
	system("cls");
	std::cout << "Write something to search for in StoryEmpty.txt" << std::endl;
	std::string wordString;
	do
	{
		std::cin.clear();
		if (std::cin.peek() == static_cast<int>('\n') || std::cin.peek() == static_cast<int>(' '))
		{
			std::cin.ignore(32767, '\n');
		}
		std::getline(std::cin, wordString);
	} while (std::cin.fail());
	std::string findWord;
	std::ifstream Story("StoryEmpty.txt");
	int wordCounter{ 0 };
	while (Story>>findWord)
	{
		for (int i = 0; i < findWord.size(); i++)
		{
			findWord[i] = tolower(findWord[i]);
		}
		if (findWord==wordString)
		{
			wordCounter++;
		}
	}
	Story.close();
	std::cout << "The word " << wordString << ", was found " << wordCounter << " times." << std::endl;
	system("pause");
}