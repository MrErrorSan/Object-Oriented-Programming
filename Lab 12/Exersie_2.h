#pragma once
class Shape
{
private:
	int length;
	int breadth;
	int hight;
public:
	//SETTERS
	void SetLength(int l);
	void SetBreadth(int b);
	void SetHight(int h);
	//GETTERS
	int getLength();
	int getBreadth();
	int getHight();
};
class Painting
{
private:
	int cost;
public:
	Painting();// If wanting to peremanent cost for all
	void setcost(int c);
	int getcost(int Area);
};
//////////////////////////////////////
class Square : public Shape , public Painting
{
private:

public:
	Square(int l, int c);//l=LENGTH,c=COST
	int getArea();
	~Square();
};
class Rectangle : public Shape , public Painting
{
private:

public:
	Rectangle(int l,int b, int c);//l=LENGTH,b=BREATH,c=COST
	int getArea();
	~Rectangle();
};
class Triangle : public Shape , public Painting
{
private:

public:
	Triangle(int b,int h, int c);//b=BREATH,h=HIGHT,c=COST
	int getArea();
	~Triangle();
};