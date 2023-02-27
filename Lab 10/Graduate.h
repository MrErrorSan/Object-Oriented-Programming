#pragma once
#include"Student.h"
#include<string>
#include<iostream>
using namespace std;
class Graduate:public Student
{
private:
	char* thesis_topic;
public:
	Graduate(char* fName, char* lName, int age, float cgpa, char* thesis_top) :Student(fName, lName, age,cgpa)
	{
		thesis_topic = nullptr;
		if (thesis_top != nullptr)
		{
			thesis_topic = new char[strlen(thesis_top) + 1];
			strcpy(thesis_topic, thesis_top);
		}
	}
	void setThesis_topic(char* thesis_top);
	char* getThesis_topic();
	~Graduate();
};