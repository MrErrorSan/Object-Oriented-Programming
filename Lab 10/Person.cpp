#include "Person.h"
#define _CRT_SECURE_NO_WARNINGS
#include<string>
#include<cstring>
#include<iostream>
using namespace std;
Person::Person(const char* FirstN ,const char* LastN ,int age)
{
	FirstName = LastName = nullptr;
	if (FirstN != nullptr && LastN != nullptr)
	{
		FirstName = new char[strlen(FirstN) + 1];
		LastName = new char[strlen(LastN) + 1];
		strcpy(FirstName, FirstN);
		strcpy(LastName, LastN);
	}
	this->age = age;
	cout << "Permitrized Constructor of \"Person\" Called..." << endl;
}
void Person::setFirstName(char* FirstN)
{
	if (FirstName != nullptr)
	{
		delete[] FirstName;
	}
	FirstName = new char[strlen(FirstN) + 1];
	strcpy(FirstName, FirstN);
}
void Person::setLastName(char* LastN)
{
	if (LastName != nullptr)
	{
		delete[] LastName;
	}
	LastName = new char[strlen(LastN) + 1];
	strcpy(LastName, LastN);
}
void Person::setAge(int age)
{
	this->age = age;
}
void Person::setName(char* LastN, char *FirstN)
{
	delete[] LastName;
	delete[] FirstName;
	FirstName = new char[strlen(FirstN) + 1];
	LastName = new char[strlen(LastN) + 1];
	strcpy(FirstName, FirstN);
	strcpy(LastName, LastN);
}
void Person::print()
{
	cout << FirstName << " " << LastName << " is " << age << " years old" << endl;
}
char* Person::getFirstName()
{
	return FirstName;
}
char* Person::getLastName()
{
	return LastName;
}
int Person::getAge()
{
	return age;
}
Person::~Person()
{
	if (FirstName != nullptr && LastName != nullptr)
	{
		delete[] FirstName;
		FirstName=NULL;
		delete[] LastName;
		LastName=NULL;
	}
	cout << "~Person() called" << endl;
}