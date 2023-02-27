#pragma once
#define _CRT_SECURE_NO_WARNINGS
class Person
{
private:
	char* FirstName;
	char* LastName;
protected:
	int age;
public:
	Person(const char* FirstN , const char* LastN ,int age);
	void setFirstName(char* FirstN);
	void setLastName(char* LastN);
	void setName(char* LastN, char *FirstN);
	void setAge(int age);
	char* getFirstName();
	char* getLastName();
	int getAge();
	void print();
	~Person();
};



