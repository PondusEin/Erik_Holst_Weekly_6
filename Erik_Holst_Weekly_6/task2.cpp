#include "menu.h"
#include <iomanip>

class Student{
public:
	std::string studentsName;
	int studentScores;
	std::string results;
};

void calculateGrade() {

}
double average() {

}
int max() {

}
int min() {

}
void task2()
{
	system("cls");

	std::cout << "Studentname\tScore\n";

	std::cout << "Number of students: " << std::endl;
	std::cout << "Average score: " << std::setprecision(3) << /*average(students)*/ std::endl;
	std::cout << "Lowerst score: " << /*max(students)*/std::endl;
	std::cout << "Highest score: " << /*min(students)*/ std::endl;

	system("pause");
 	//make files with studentsa and score name?
	//get character --> see if first position is A. If true, ++grade. else, nothing and read next character. etc. 
}