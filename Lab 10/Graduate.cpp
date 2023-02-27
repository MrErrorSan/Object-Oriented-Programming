#pragma once
#include "Graduate.h"
void Graduate::setThesis_topic(char* thesis_top)
{
	thesis_topic = thesis_top;
}
char* Graduate::getThesis_topic()
{
	return thesis_topic;
}
Graduate::~Graduate()
{
	delete[] thesis_topic;
	thesis_topic=NULL;
	cout << "~Graduate() called" << endl;
}
