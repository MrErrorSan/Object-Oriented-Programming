#include"Cat.h"
Cat::Cat()
{
	cout<<"Cat() is called"<<endl;
}
string Cat::speak()
{
	string M="Mew!";		//creating new string M 
	setmessege(M);
	return M;
}
Cat::~Cat()
{
	cout<<"~Cat() is called"<<endl;
}