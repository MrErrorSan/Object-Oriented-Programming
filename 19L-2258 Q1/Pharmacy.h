#pragma once
#include"MyDate.h"
#include<iostream>
using namespace std;
//##################################################################################
class Pharmacy
{
private:
	int amount;
	Item** A;
	int index;
public:
	Pharmacy(int amt)
	{
		amount = amt;
		A=new Item *[amount];
		index=0;
	}
	void AddItem(Item *iptr)
	{
		if(index<amount)
		{
			A[index]=iptr;
		}
	}
	void DisplayItems()
	{
		for(int i=0;i<amount;i++)
		{
			A[0][i].print();
			cout<<endl;
		}
	}
	~Pharmacy()
	{
		for(int i=0;i<amount;i++)
		delete [] A[i];
		delete [] A;
	}
};
//##################################################################################
class Item
{
protected:
	char*name;
	mDate date;
public:
	Item(char* nam, int d,int m,int y)
	{
		int i=0;
		for(;nam[i]!='\0';i++){}
		name= new char [i+1];
		i=0;
		for(;nam[i]!='\0';i++){
		name[i]=nam[i];
		}
		name[i]='\0';
		mDate temp(d,m,y);
		date=temp;
	}
	virtual void print()=0;
	~Item()
	{
		delete [] name;
		delete&date;
	}
};
//##################################################################################
class Permanent : public Item
{
protected:
	float Actual_Price;
	float Current_Price;
	int PassedDays;
public:
	Permanent();
	Permanent(char*nam,float pice,int d,int m,int y):Item(nam,d,m,y)
	{
		
		Actual_Price=pice;
		//Current_Price=Actual_Price;
		
		PassedDays=date-CurrentDate();
		float temprary=0.02*Actual_Price;
		temprary=temprary/100;
		temprary=temprary*PassedDays;
		Current_Price=Actual_Price-temprary;
	}
	virtual void print()
	{
		//Print all information i.e. name, actual price, entry date, Passed days, current price.
		// a glucometer of price 5000 and entry date 15 Nov 2020
		cout<<name<<" of Current price"<<Current_Price<<", entry date ";
		cout<<date<<endl;
		cout<<"Passed Days : "<<PassedDays<<"Actual Price : "<<Actual_Price<<endl;
	}
	~Permanent()
	{
		Item::~Item();
	}

};
//##################################################################################
class Perishable: public Item
{
private:
	float price;
	int quantity;
public:
	Perishable(char*nam,float pice,int d,int m,int y,int quant):Item(nam,d,m,y)
	{
		price=pice;
		quantity=quant;
		if(CurrentDate()==date)
		{
			price=0;
		}


	}
	virtual void print()
	{
		// 500mg Panadol tablet of price 20, expiry date 16 Jan 2021
		cout<<quantity<<"mg "<<name<<"tablet of price"<<price<<", expiry date ";
		cout<<date<<endl;
	}
	~Perishable()
	{
		Item::~Item();
	}
};
//##################################################################################
class Bulk_Item : public Permanent
{
private:
	char* discription;
	bool set;
public:
	Bulk_Item(char*nam,float pice,int d,int m,int y,char*dis,bool set1):Permanent(nam , pice, d,m,y)
	{
		int i=0;
		for(;dis[i]!='\0';i++){}
		discription= new char [i+1];
		i=0;
		for(;dis[i]!='\0';i++){
			discription[i]=dis[i];
		}
		discription[i]='\0';
		set=set1;
	}
	virtual void print()
	{
		if(set)
		{
			cout<<name<<"Box of Cost "<<Current_Price<<"Rs. with entry date "<<date<<endl;
		}
		if(!set)
		{
			cout<<name<<" of Cost "<<Current_Price<<"Rs. with entry date "<<date<<endl;
		}
		cout<<"Discription : "<<discription<<endl;
	}
	~Bulk_Item()
	{
		Permanent::~Permanent();
		delete [] discription;
	}
};
//##################################################################################
void mDate::operator=(const mDate& d1)
{
	this->d = d1.d; 
	this->m = d1.m; 
	this->y = d1.y;
}
bool mDate::operator==(const mDate& d1)
{
	if(this->d == d1.d)
	{
		if(this->m == d1.m)
			if(this->y == d1.y)
				return true;
	}else
		return false;
}