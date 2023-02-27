#include"Exersie_2.h"
#include<iostream>
using namespace std;
void Shape::SetLength(int l)
{
	length=l;
}
void Shape::SetBreadth(int b)
{
	breadth=b;
}
void Shape::SetHight(int h)
{
	hight=h;
}
int Shape::getLength()
{
	return length;
}
int Shape::getBreadth()
{
	return breadth;
}
int Shape::getHight()
{
	return hight;
}
//////////////////////////////////////
Painting::Painting()
{
	cost = 50;
}
void Painting::setcost(int c)
{
	cost=c;
}
int Painting::getcost(int Area)
{
	return (Area*cost);
}
//////////////////////////////////////
Square::Square(int l,int c)//l=LENGTH,c=COST
{
	//cout<<"Square() Called";
	SetLength(l);
	setcost(c);
}
int Square::getArea()
{
	//a. Area of square = length * lenth
	/*int a=getLength();
	return a*a;*/
	return getLength()*getLength();
}
Square::~Square()
{
	cout<<"~Square() Called";
}
//////////////////////////////////////
Rectangle::Rectangle(int l,int b, int c)//l=LENGTH,b=BREATH,c=COST
{
	SetLength(l);
	SetBreadth(b);
	setcost(c);
}
int Rectangle::getArea()
{
	//b. Area of rectangle = length* breadth
	return getLength()*getBreadth();
}
Rectangle::~Rectangle()
{
	cout<<"~Rectangle() Called";
}
//////////////////////////////////////
Triangle::Triangle(int b,int h, int c)//b=BREATH,h=HIGHT,c=COST
{
	SetHight(h);
	SetBreadth(b);
	setcost(c);
}
int Triangle::getArea()
{
	//c. Area of triangle = ½ * breadth * height
	return (0.5*getHight()*getBreadth());
}
Triangle::~Triangle()
{
	cout<<"~Triangle() Called";
}