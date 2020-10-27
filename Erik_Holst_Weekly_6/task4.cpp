#include "menu.h"

void task4()
{
	std::ifstream Story1("Input.txt");
	std::ofstream Story2("Output.txt");
	std::string content = "";	
	while (!Story1.eof()) content += Story1.get();
	/*int i;
	for ( i = 0; Story1.eof()!=true; i++)
	{
		content += Story1.get();
	}
	i--;*/
	content.erase(content.end() - 1);
	//std::cout << i << " Characters read...\n";
	Story1.close();
	Story2 << content;
	Story2.close();
}