#include<iostream>
using namespace std;
class DateTime{ 
private:
	unsigned int month; 
	unsigned int year; 
	unsigned int day; 
	unsigned int hour; 
	unsigned int minute; 
	unsigned int second; 
	unsigned int millisecond; 
public: 
	DateTime()
	{
		const unsigned int year = 1970;
		const unsigned int month = 1;
		const unsigned int day = 1;
		const unsigned int hour = 0;
		const unsigned int minute = 0;
		const unsigned int second = 0;
		const unsigned int millisecond = 0;
	}
	DateTime(DateTime &p)
	{
		this->year =p.year;
		this->month=p.month;
		this->day=p.day;
		this->hour =p.hour;
		this->minute =p.minute;
		this-> second =p.second;
		this-> millisecond =p.millisecond;
	}
	static bool isLeapYear(unsigned int  year)
	{
		if(year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
		{
			return true;
		}
		return false;
	}
	void addYears(unsigned int years)
	{
		this->year = this->year + years;
	}
	void addMonths(unsigned int months)
	{
		this->month = this->month + months;
		if(this->month>=12)
		{
			int c=this->month/12;
			this->year = this->year + c;
			this->month=this->month%12;
		}
	}
	///////////////////////////////////////
	unsigned int getLastDayOfMonth()
	{
		if(this->month==1||3||5||7||8||10||12)
		{
			return 31;
		}
		if(this->month==4||6||9||11)
		{
			return 30;
		}
		if(this->month=2)
		{
			if(isLeapYear(this->year))
			{
				return 29;
			}
			return 28;
		}
	}
	//////////////////////////////////////
	void addDays(unsigned int days)
	{
		this->day=this->day+days;
		if(this->day>=getLastDayOfMonth())
		{
			int c= (this->day/getLastDayOfMonth());
			this->month = this->month + c;
			this->day=this->day % getLastDayOfMonth();
		}
	}
	void addHours(unsigned int hours)
	{
		this->hour=this->hour+hours;
		if(this->hour>=24)
		{
			int c= (this->hour/24);
			this->day = this->day + c;
			this->hour=this->hour % 24;
		}
	}
	void addMinutes(unsigned int minutes)
	{
		this->minute=this->minute+minutes;
		if(this->minute>=60)
		{
			int c= (this->minute/60);
			this->hour = this->hour + c;
			this->minute=this->minute % 60;
		}
	}
	void addSeconds(unsigned int seconds)
	{
		this->second=this->hour+seconds;
		if(this->second>=60)
		{
			int c= (this->second/60);
			this->minute = this->minute + c;
			this->second=this->second % 60;
		}
	}
	void addMilliseconds(unsigned int milliseconds)
	{
		this->millisecond=this->hour+milliseconds;
		if(this->millisecond>=1000)
		{
			int c= (this->millisecond/1000);
			this->second = this->second + c;
			this->millisecond=this->millisecond % 1000;
		}
	}
	//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	unsigned int getYear()
	{
		return this->year;
	}
	unsigned int setYear(int m)
	{
		this->year=m;
		return m;
	}
	unsigned int  getMonth()
	{
		return this->month;
	}
	unsigned int setMonth(int m)
	{
		this->month=m;
		return m;
	}
	unsigned int getDay()
	{
		return this->day;
	}

	unsigned int setDay(int m)
	{
		this->day=m;
		return m;
	}
	unsigned int getHour()
	{
		return this->hour;
	}
	unsigned int setHour(int m)
	{
		this->hour=m;
		return m;
	}
	unsigned int getMinute()
	{
		return this->minute;
	}
	unsigned int setMinute(int m)
	{
		this->minute=m;
		return m;
	}
	unsigned int getSecond()
	{
		return this->second;
	}
	unsigned int setSecond(int m)
	{
		this->second=m;
		return m;
	}
	unsigned int getMillisecond()
	{
		return this->millisecond;
	}
	unsigned int setMillisecond(int m)
	{
		this->millisecond=m;
		return m;
	}
};
//####################################################################
int main()
{
	//DateTime obj;
	//DateTime p(obj);

	system("pause");
	return 0;
}