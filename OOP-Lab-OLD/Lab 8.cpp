#include <iostream>
using namespace std;
//###########################################################
class BinaryNum
{
private:
      int* binNum;	//integer array to save binary number
	int noOfBits;	//total no. of bits
public: 
	friend ostream& operator<<(ostream& _cout, const BinaryNum& obj);
	friend istream& operator>>(istream& _cin, const BinaryNum& obj);
	/////////////////////////////////////////
	inline bool isBinary(int *n)
	{
		for(int i=0;n[i]>0;i++)
		{
			if ((n[i] % 10) > 1)
				return false;
			n[i] /= 10;
		}
    return true;
	}
	//////////////////////////////////////////
	BinaryNum()
	{
		this->binNum=NULL;
		this->noOfBits=0;
	}
	//////////////////////////////////////////
	BinaryNum(const char *a)
	{
		if(a== NULL)
		{
			this->binNum=NULL;
			this->noOfBits=0;
		}else
		{
			for(int i=0;i != '\0';i++)
			{
				this->noOfBits= i;
			}
			int * temp =new int [noOfBits];
			for(int i=0,j=1;i<=this->noOfBits;i++,j++)
			{
				temp[i]= a[j];
			}
			this->binNum = NULL;
			this->binNum= temp;
			temp=NULL;
			if(!isBinary(binNum))
			{
				cout<<"***The given value is not binary***"<<endl;
				this->binNum = NULL;
				this->noOfBits= 0;
			}
		}
	}
	//////////////////////////////////////////////////////////
	int operator [](int a)
	{
		if(a>this->noOfBits)
		{
			cout<<"The Given Value is out of course and this will give 'ZERO'";
			return 0;
		}
		return this->binNum[a];

	}
	//////////////////////////////////////////////////////////
	BinaryNum operator +(const BinaryNum obj)
	{
		int temp =0; int c=0;
		BinaryNum sum;
		if(this->noOfBits<=obj.noOfBits)
		{
			sum.noOfBits=obj.noOfBits+1;
		}else
		{
			sum.noOfBits=this->noOfBits+1;
		}
		for(int i=0,j=0;i<this->noOfBits||j<obj.noOfBits;i++,j++)
		{
			if(this->binNum[i] != 0||1)
			{
				this->binNum[i]=0;
			}
			if(obj.binNum[i] != 0||1)
			{
				obj.binNum[i]=0;
			}
			int s=this->binNum[i]+obj.binNum[j]+temp;
			if(s>1)
			{
				temp=s/2;
				s= s%2;
			}else
			{
				temp=0;
			}
			sum.binNum[c]=s;
			c++;
		}
		if((c-1)<sum.noOfBits)
			{
				sum.noOfBits=sum.noOfBits-1;
			}
		return sum;
	}
///////////////////////////////////////////////////////////////
	bool operator ==(const BinaryNum obj)
	{
		if(this->noOfBits == obj.noOfBits)
		{
			for(int i=0;i<this->noOfBits;i++)
			{
				if(this->binNum[i] != obj.binNum[i])
				{
					return false;
				}
			}
			return true;
		}
		return false;
	}
///////////////////////////////////////////////////////////////
	BinaryNum operator ++()
	{
			this->binNum[0]=this->binNum[0] +1;
			for(int i=0;i<this->noOfBits;i++)
			{
				int temp =0;

				if(this->binNum[i]>1)
				{
					binNum[i]=binNum[i]+temp;
					temp=this->binNum[0]/2;
					binNum[i] = binNum[i]%2;
				}
			}
			return *this;
	}
	//////////////////////////////////////////////////////////
	BinaryNum operator ++(int d)
	{
		BinaryNum a= *this;
			this->binNum[0]=this->binNum[0] +1;
			for(int i=0;i<this->noOfBits;i++)
			{
				int temp =0;

				if(this->binNum[i]>1)
				{
					binNum[i]=binNum[i]+temp;
					temp=this->binNum[0]/2;
					binNum[i] = binNum[i]%2;
				}
			}
			return a;
	}
	//////////////////////////////////////////////////////////
	BinaryNum operator -(const BinaryNum obj)
	{
		BinaryNum sub;
		if(this->noOfBits>=obj.noOfBits)
		{
			sub.noOfBits=this->noOfBits;
		}else
			sub.noOfBits=obj.noOfBits;

		if(this->noOfBits>=obj.noOfBits)
		{
			for(int i=0;i<obj.noOfBits;i++)
			{
				if(this->binNum[i] < obj.binNum[i])
				{
					this->binNum[i+1]=this->binNum[i+1]-1;
					this->binNum[i]=this->binNum[i]+2;
				}
				int c=0;
				sub.binNum[c] = this->binNum[i] - obj.binNum[i];
				c++;
				if((c-1)<this->noOfBits)
				{
					sub.binNum[c]=this->binNum[c];
				}
			}
		}else
		{
			if(this->noOfBits<obj.noOfBits)
			{
				for(int i=0;i<this->noOfBits;i++)
				{
					if(this->binNum[i] > obj.binNum[i])
					{
						obj.binNum[i+1]=obj.binNum[i+1]-1;
						obj.binNum[i]=obj.binNum[i]+2;
					}
					int c=0;
					sub.binNum[c] = obj.binNum[i] - this->binNum[i] ;
					c++;
					if((c-1)<obj.noOfBits)
					{
						sub.binNum[c]=obj.binNum[c];
					}
				}
				sub.binNum[noOfBits]=sub.binNum[noOfBits]*(-1);
			}
		}
		return sub;
	}
//////////////////////////////////////////////////////////////
	void Print()
	{
		if(binNum != 0)
		{
//			cout<<"{";
			for(int i = 0 ; i< noOfBits ; i++)
			{
				cout<<binNum[i];
//				if(i<noOfBits-1)
//					cout<<",";
			}
//			cout<<"}";
		}
		cout<<endl;
	}
};
//////////////////////////////////////////////////////////////////
ostream& operator<<(ostream& _cout, const BinaryNum& obj)
{
	if (obj.binNum != 0) 
	{
//		cout<<"{";
			for(int i = 0 ; i< obj.noOfBits ; i++)
			{
				cout<<obj.binNum[i];
//				if(i<obj.noOfBits-1)
//					cout<<",";
			}
//			cout<<"}";
	}
cout << endl;
return _cout;
}
///////////////////////////////////////////////////////////////////
istream& operator>>(istream& _cin, BinaryNum& obj)
{
	int a;
	cout<<"Enter The Number of Bits :";
	cin>> obj.noOfBits;
	for(int i=0;i<obj.noOfBits;i++)
	{
		cout<<"Enter The Value of Bit #"<<i<<" :";
		cin>>obj.binNum[i];
	}
	return _cin;
}
//##############################################################
void main()
{
	BinaryNum b1;			//noOfBits = 0, binNum is NULL
	BinaryNum b2("101");	//noOfBits = 3, binNum is {1,0,1}
	BinaryNum b3("1001");	//noOfBits = 4, binNum is {1,0,0,1}

	cout<<"b1 = ";cout<<b1;	//Prints Nothing
	cout<<"b2 = ";cout<<b2;	//Prints 101
	cout<<"b3 = ";cout<<b3;	//Prints 1001

	b1 = b2+b3;
	cout<<"b1 = "<<b1;	//Prints 1110
	cout<<"b1[0] = "<<b1[0]<<endl;	//Prints 1 (0th bit in b1)
	cout<<"b1[3] = "<<b1[3]<<endl;	//Prints 0 (3rd bit in b1)

	cout<<b3++;				
bool check = (b3==b2);
cout<<"is equal= "<<check;			//Prints 0
cout<<++b3;							
cin>>b2; 				
cout<<b1-b2; 				
}