#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include"Student.h"
#include<cstring>
#include<string>
#include<iostream>
using namespace std;
class Undergraduate:public Student
{
private:
	char* fyp_name;
public:
	Undergraduate(const char* Name1, const  char* Name2, int age, float cgpa, const  char* fyp_Name) :Student(Name1, Name2, age, cgpa)
	{
		fyp_name = nullptr;
		if (fyp_Name != nullptr)
		{
			fyp_name = new char[strlen(fyp_Name) + 1];
			strcpy(fyp_name, fyp_Name);
		}
	}
	void setFyp_Name(char* fyp_Name);
	char* getFyp_Name();
	~Undergraduate();
};

