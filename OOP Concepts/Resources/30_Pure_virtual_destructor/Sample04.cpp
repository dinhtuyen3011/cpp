#include<iostream>
using namespace std;
class Apple
{
public:
  	// Pure Virtual Function declaration
	virtual void price() = 0;
	// Member functions
	void ringtone() 
	{
		cout<<"The ringtone is: Reflection"<<endl;
	}
};

class iPhoneX: public Apple
{
public:
	void price() 
	{
		cout<<"The price is: 65,500"<<endl;
	}
};

int main()
{
	cout<<"Welcome to DataFlair tutorials"<<endl<<endl;
	iPhoneX i;
	i.price();
	i.ringtone();
	return 0;
}
/* Output *//*
Welcome to DataFlair tutorials
The price is: 65,500
The ringtone is: Reflection
*/