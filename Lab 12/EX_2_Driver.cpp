#include"Exersie_2.h"
#include<iostream>
using namespace std;
int main()
{
	Square A(12,20);
	cout<<"Total Square Area  :"<<A.getArea()<<endl;
	cout<<"Total Paint Cost  : $"<<A.getcost(A.getArea())<<endl;
	Rectangle b(12,10,40);
	cout<<"Total Rectangle Area  :"<<b.getArea()<<endl;
	cout<<"Total Paint Cost  : $"<<b.getcost(b.getArea())<<endl;
	Triangle c(12,10,30);
	cout<<"Total Triangle Area  :"<<c.getArea()<<endl;
	cout<<"Total Paint Cost  : $"<<c.getcost(c.getArea())<<endl;
	system("pause");
	return 0;
}