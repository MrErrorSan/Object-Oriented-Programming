#include "Student.h"
#include<string>

void Student::setCgpa(float cgpa)
{
	this->cgpa = cgpa;
}
float Student::getCgpa()
{
	return cgpa;
}
void Student::printStudent()
{
	cout << getFirstName() << " " << getLastName() << " is " << getAge() << " years old, and his/her GPA is " << cgpa << endl;
}
Student::~Student()
{
	cout << "~Student()  called" << endl;
}