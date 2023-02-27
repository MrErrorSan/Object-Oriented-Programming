#include"Faculty.h"
#include"Graduate.h"
#include"Person.h"
#include"Student.h"
#include"Undergraduate.h"
#include<iostream>
using namespace std;
int main()
{
	int Age=19;float GPA=3.50;
	char FirstName[] = "Random", LastName[] = "Student",Project[]="Tic Tak Toe";
	Undergraduate U(FirstName, LastName,Age,GPA,Project);
	int age = 50,Courses=8;
	char firstname[] = "Random", lastname[] = "Faculty Member",ExtensionNumber[]="666";
	Faculty F(firstname,lastname,age,Courses,ExtensionNumber);
	cout<<"\n**********Student**********"<<endl;
	U.printStudent();
	cout<<"\n**********Faculty**********"<<endl;
	F.printFaculty();

	system("pause");
}