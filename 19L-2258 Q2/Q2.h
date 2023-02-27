#pragma once
#include<cstring>
#include<iostream>
using namespace std;
class List
{
private:
	int size;
	float* arr;
public:
	List(int a)
	{
		size=a;
		arr=new float [a];
	};
	List()
	{
		size=0;
		arr=NULL;
	}
	int length()
	{
		return size;
	}
	List(const List& a)
	{
		for (int i=0;a.size;i++)
		{
			arr[i]=a.arr[i];
		}
		size=a.size;
	}
	List operator +(const List& a)
	{
		int x=0;
		int s= size+a.size;
		float *temp=new float [s];
		for(int i=0;i<size;i++)
		{
			temp[x]=arr[i];
		}
		for(int i=0;i<a.size;i++)
		{
			temp[x]=a.arr[i];
		}
		delete[] arr;
		arr=temp;
		size=s;
		temp=NULL;
		return *this;
	}
	float operator =(const List& a)
	{
		return a.arr[0];
	}
















	~List()
	{
		delete [] arr;
		delete arr;
	}


};

int main()
{


	system("pause");
	return 0;
}