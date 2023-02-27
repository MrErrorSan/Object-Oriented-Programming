#include<iostream>
#include<exception>
using namespace std;

class myexception: public exception
{
	virtual const char* what() const throw()
	{
		return "Invalid date";
	}
	
} date1;

class myexception: public exception
{
	virtual const char* what() const throw()
	{
		return "Invalid month";
	}
	
} month1;

class myexception: public exception
{
	virtual const char* what() const throw()
	{
		return "Invalid year";
	}
	
} year1;
int main()
{
	int date,month,year;
	try
	{
		cout<<"Enter date of Birth"<<endl;
	    cin>>date>>month>>year;
	    if(date>31||date<1)
	    {
	    	throw date1;
		}
		else if(month>12||month<1)
		{
			throw month1;
		}
		else if(year<1)
		{
			throw year1;
		}
		else
		{
			cout<<"Your date of birth is: "
			if(month1==1)
			{
				cout<<"January,";
			}
			if(month1==2)
			{
				cout<<"Februat,";
			}
			if(month1==3)
			{
				cout<<"March,";
			}
			if(month1==4)
			{
				cout<<"April,";
			}
			if(month1==5)
			{
				cout<<"May,";
			}
			if(month1==6)
			{
				cout<<"June,";
			}
			if(month1==7)
			{
				cout<<"July,";
			}
			if(month1==8)
			{
				cout<<"August,";
			}
			if(month1==9)
			{
				cout<<"September,";
			}
			if(month1==10)
			{
				cout<<"October,";
			}
			if(month1==11)
			{
				cout<<"November,";
			}
			if(month1==12)
			{
				cout<<"December,";
			}
			cout<<month<<year<<endl;
			
		}
	}
	catch(exception& e)
	{
		cout<e.what();
	}
	system("pause");
	return 0;
}
