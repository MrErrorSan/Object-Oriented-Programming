#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<string>
#include<cstring>
#include<iostream>
#include"Person.h"
using namespace std;
class Student:public Person
{
private:
	float cgpa;
public:
	Student(const char* Name1,const char* Name2, int age, float cgpa) :Person(Name1, Name2, age)
	{
		this->cgpa = cgpa;
	}
	void setCgpa(float cgpa);
	float getCgpa();
	void printStudent();
	~Student();
};

