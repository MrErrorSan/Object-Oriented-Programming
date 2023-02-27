#include "FacultyMember.h"
#define _CRT_SECURE_NO_WARNINGS
#include<string>
#include<cstring>
#include<iostream>
using namespace std;
void FacultyMember::serCourse_count(int course_count)
{
	this->course_count = course_count;
}
void FacultyMember::setExtension_number(char *extension_N)
{
	strcpy(extension_number, extension_N);
}
int FacultyMember::getCourse_count()
{
	return course_count;
}
char* FacultyMember::getExtension_number()
{
	return extension_number;
}
FacultyMember::~FacultyMember()
{
	cout << "~FacultyMember() called" << endl;
}

void FacultyMember::printFaculty()
{
	cout << "Faculty Member name :" << getfName() << " " << getlName() << ", Age :" << getAge() << ", Number of courses :" << course_count << ", Ext." << extension_number << endl;
}