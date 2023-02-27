#include<iostream>
#include<exception>
using namespace std;
class tornadoException
{
	private:
		char* msg;
	public:
		
	tornadoException()
	{
		msg="Tornado: Take cover immediately";
		throw msg;
	}
	tornadoException(int n)
	{
		msg="Tornado: m miles away; and approaching!";
		throw msg;
	}
};
int main()
{
	try
	{
		tornadoException();
	}
	catch(exception b)
	{
		cout<<b.what()<<endl;
	}
	system("pause");
	return 0;
}
