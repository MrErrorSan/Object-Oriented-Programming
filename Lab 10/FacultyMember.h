#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<string>
#include<cstring>
#include"Person.h"
class FacultyMember:public Person
{
private:
	int course_count;
	char extension_number[4];
public:
	FacultyMember(const char* fN, const  char* lN, int age, int course_count, const  char* extension_N) :Person(fN, lN, age)
	{
		this->course_count = course_count;
		strcpy(extension_number, extension_N);
	}
	void serCourse_count(int course_count);
	void setExtension_number(char *extension_N);
	int getCourse_count();
	char* getExtension_number();
	void printFaculty();
	~FacultyMember();
};