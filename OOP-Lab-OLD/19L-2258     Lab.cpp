#include <iostream>
using namespace std;
class person
{
private:
	char* firstname;
	char* lastname;
protected:
	int age;
public:
	person ()
	{
		this->firstname=NULL;
		this->lastname=NULL;
		this->age=NULL;
	}
	person(char* a,char*l,int n)
	{
		for(int i=0;a[i]!='\0';i++)
		{
			this->firstname[i]=a[i];
		}
		for(int i=0;l[i]!='\0';i++)
		{
			this->lastname[i]=l[i];
		}
		this->age=n;
	}
	void personinput()
	{
		cout<<"*****NOTE: Only 20 words each are allowed*****"<<endl; 
		cout<<"Enter First-name :-   ";
		cin.getline(this->firstname,20);
		cout<<"Enter Last-name :-   ";
		cin.getline(this->lastname,20);
		cout<<"Enter Age :-   ";
		cin>>this->age;
	}
	void personout()
	{
		cout<<"First-Name	:	"<<firstname<<endl;
		cout<<"Last-Name	:	"<<lastname<<endl;
		cout<<"Age	:	"<<age<<endl;
	}
	~person()
	{
		delete[] firstname;
		delete[] lastname;
		firstname=NULL;
		lastname=NULL;
	}
};
class student : protected person
{
protected:
	float cgpa;
public:
	student ()
	{
		this->cgpa =NULL;
	}
	student (char* a,char*l,int n,float z) : person(a,l,n)
	{
		this->cgpa = z;
	}
	void studentinput ()
	{
		//personinput;
		&person::personinput;
		cout<<"Enter CGPA :-    ";
		cin>>cgpa;
	}
	void studentout()
	{
		//personout;
		&person::personout;
		cout<<"CGPA		:	"<<cgpa<<endl;
	}
	~student()
	{
		cgpa=NULL;
	}
};
class ungraduatedstudent : protected student
{
private:
	char* fypname;
public:
	ungraduatedstudent()
	{
		fypname =NULL;
	}
	void inputungraduatedstudent ()
	{
		//studentinput;
		&student::studentinput;
		cout<<"Enter the name of FYP :-      ";
		cin.getline(fypname,20);
	}
	void ungraduatedstudentout ()
	{
		//studentout;
		&student::studentout;
		cout<<"FYP_Name		:	"<<fypname<<endl;
	}
	~ungraduatedstudent()
	{
		delete[] fypname;
		fypname=NULL;
	}
};
class graduatedstudent : protected student
{
protected:
	char* thesistopic;
public:
	graduatedstudent()
	{
		thesistopic =NULL;
	}
	void inputgraduatedstudent ()
	{
		//studentinput;
		&student::studentinput;
		cout<<"Enter the name of FYP :-      ";
		cin.getline(thesistopic,20);
	}
	void graduatedstudentout ()
	{
		//studentout;
		&student::studentout;
		cout<<"Thesis_Topic	:	"<<thesistopic<<endl;
	}
	~graduatedstudent()
	{
		delete[] thesistopic;
		thesistopic=NULL;
	}
};
class facility : protected person
{
private:
	int coursecount;
	int* phone;
public:
	facility()
	{
		coursecount =NULL;
		phone = NULL;
	}
	facility(char* a,char*l,int n,int count,int* m) : person(a,l,n)
	{
		this->coursecount = count;
		int size = *(&m + 1) - m;
		for(int i=0;i<size;i++)
		{
		this->phone[i]=m[i];
		}
	}
	void inputfacility()
	{
		//personinput;
		&person::personout;
		cout<<"Enter the No. of courses taken :-    ";
		cin>>coursecount;
		cout<<"Enter Mobile phone Number{max no.s = 3} :-     ";
		for(int i=0;i<3;i++)
		{
			cout<<"Enter 'Digit#"<<i+1<<"' of mobile no.:-     ";
			cin>>phone[i];
			if(phone[i]>9)
				i--;
		}
	}
	void facilityout ()
	{
		//personout;
		&person::personout;
		cout<<"Number of current courses		:	"<<coursecount<<endl;
		cout<<"Mobile Phone Number		:	"<<phone<<endl;
	}
	~facility()
	{
		delete [] phone;
		phone=NULL;
		coursecount=NULL;
	}
};
class ta : protected student , protected facility
{

};

int main()
{

	system("pause");
	return 0;
}