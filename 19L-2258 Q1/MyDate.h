#include<time.h>
#include<iostream>
using namespace std;
class mDate
{
int d; 
int m; 
int y;
public:
mDate(int d = 0, int m = 0, int y = 0)
{ 
	this->d = d; 
	this->m = m; 
	this->y = y;
} 
void operator=(const mDate& d1);
bool operator==(const mDate& d1);
int operator-(const mDate & d1)
{
	int diff = 0;
	diff = (y-d1.y) * 365;
	diff = diff + (m-d1.m) * 30; 
	diff = diff + (d-d1.d); 
	return diff;
}
friend ostream & operator <<(ostream & out, const mDate & d)
{ 
	out << d.d << "-" << d.m << "-" << d.y;	
	return out; 
}

};
//Global Date Function 
mDate CurrentDate()
{
	//If Function localtime() gives error, comment option 1 and use option 2
	
//-------------------------------Option 1 -------------------------------------------
	time_t now = time(0);
	struct tm * newtime = localtime(&now); 
	int curry = newtime->tm_year + 1900; 
	int currm = newtime->tm_mon + 1;
	int currd = newtime->tm_mday; 
	mDate d(currd, currm, curry); 
	return d;
	
//-------------------------------Option 2 -------------------------------------------
	//time_t now = time(0);
	//struct tm newtime;
	//localtime_s(&newtime,&now);
	//int curry = newtime.tm_year + 1900; 
	//int currm = newtime.tm_mon + 1;
	//int currd = newtime.tm_mday; 
	//mDate d(currd, currm, curry); 
	//return d;
}