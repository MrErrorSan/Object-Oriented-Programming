#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<string>
#include<cstring>
#include"Person.h"
class Faculty:public Person
{
private:
	int course_count;
	char extension_number[4];
public:
	Faculty(const char* FirstN, const  char* LastN, int age, int course_count, const  char* extension_No) :Person(FirstN, LastN, age)
	{
		this->course_count = course_count;
		strcpy(extension_number, extension_No);
	}
	void serCourse_count(int course_count);
	void setExtension_number(char *extension_No);
	int getCourse_count();
	char* getExtension_number();
	void printFaculty();
	~Faculty();
};