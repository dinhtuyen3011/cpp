// C++ program demonstrating ambiguity in Multipath Inheritance
#include<iostream>
using namespace std;
class ClassA
{
      public:
      int a;
};
class ClassB : virtual public ClassA
{
      public:
      int b;
};
class ClassC : virtual public ClassA
{
      public:
      int c;
};
class ClassD : virtual public ClassB, public ClassC
{
      public:
      int d;
};

int main()
{
	  ClassD obj;

	  //obj.a = 10;                //Statement 1, Error            //Statement 2, Error

	        //Statement 3
	  obj.ClassC::a = 100;      //Statement 4

	  obj.ClassB::a = 10;
	  obj.b = 20;
	  obj.c = 30;
	  obj.d = 40;

	  cout<< "\n A from ClassB  : "<< obj.ClassB::a;
	  cout<< "\n A from ClassC  : "<< obj.ClassC::a;

	  cout<< "\n B : "<< obj.b;
	  cout<< "\n C : "<< obj.c;
	  cout<< "\n D : "<< obj.d;

}
/* Output *//*
A from ClassB  : 10
A from ClassC  : 100
B : 20
C : 30
D : 40
*/
