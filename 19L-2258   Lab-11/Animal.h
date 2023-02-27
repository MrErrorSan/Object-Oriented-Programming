#pragma once
#include<string>
#include<iostream>
using namespace std;
class Animal
{
private:
	 string Messege;
public:
	Animal();
	virtual string speak();
	void setmessege(string A);
	virtual ~Animal();
};