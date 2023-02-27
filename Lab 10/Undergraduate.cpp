#pragma once
#include "Undergraduate.h"

void Undergraduate::setFyp_Name(char* fyp_Name)
{
	fyp_name = fyp_Name;
}
char* Undergraduate::getFyp_Name()
{
	return fyp_name;
}
Undergraduate::~Undergraduate()
{
	delete[] fyp_name;
	fyp_name=NULL;
	cout << "~Undergraduate() called" << endl;
}