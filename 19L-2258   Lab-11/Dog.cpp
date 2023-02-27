#include"Dog.h"
Dog::Dog()
{
	cout<<"Dog() is called"<<endl;
}
string Dog::speak()
{
	string M="Woof!";   //creating new string M
	setmessege(M);
	return M;
}
Dog::~Dog()
{
	cout<<"~Dog() is called"<<endl;
}