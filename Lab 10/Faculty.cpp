#include "Faculty.h"
#define _CRT_SECURE_NO_WARNINGS
#include<string>
#include<cstring>
#include<iostream>
using namespace std;
void Faculty::serCourse_count(int course_count)
{
	this->course_count = course_count;
}
void Faculty::setExtension_number(char *extension_No)
{
	strcpy(extension_number, extension_No);
}
int Faculty::getCourse_count()
{
	return course_count;
}
char* Faculty::getExtension_number()
{
	return extension_number;
}
void Faculty::printFaculty()
{
	cout << "Name :" << getFirstName() << " " << getLastName() << "\nAge :" << getAge() << "\nNumber of courses :" << course_count << "\nExtension Number : " << extension_number << endl;
}
Faculty::~Faculty()
{
	//delete [] extension_number;
	cout << "~Faculty() called" << endl;
}