#include"Animal.h"
Animal::Animal()
{
	cout<<"Animal() is called"<<endl;
}
string Animal::speak()
{
	Messege="Speak Called()";		//creating new string M
	return Messege;
}
void Animal::setmessege(string A)
{
	this->Messege=A;
}
Animal::~Animal()
{
	cout<<"~Animal() is called"<<endl;
}