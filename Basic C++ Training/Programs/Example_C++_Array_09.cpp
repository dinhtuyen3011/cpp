//input 10 integers and print number of integers grater than or equal to 10

#include <iostream>

using namespace std;

int main()
{
	const int limit = 10;
	int list[10], count=0;
	
	cout<<"Enter 10 integers :"<<endl;
	
	for(int i=0; i<limit; i++)
	{
		cout<<"Enter Number "<<i+1<<" :";
		
		cin>>list[i];
		
		(list[i]<10) ? : count++; //observe closely and if needed, recall the syntax of ?: operator
	}	
	cout<<"Number of interger(s) greater than 10 = "<<count;
}
