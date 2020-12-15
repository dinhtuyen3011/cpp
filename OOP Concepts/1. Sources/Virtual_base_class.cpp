#include<iostream.h> 
#include<conio.h> 
class ClassA 
{ 
    public: 
    int a; 
}; 
class ClassB : virtual public ClassA 
{ 
    public: 
    int b; 
    int d;
}; 
class ClassC : virtual public ClassA 
{ 
    public: 
    int c;
    int d;
}; 

class ClassD : public ClassB, public ClassC 
{ 
    public: 
    int d; 
}; 

 void main() 
 { 
    ClassD obj; 

    obj.a = 10;        //Statement 3 
    obj.a = 100;      //Statement 4 

    obj.b = 20; 
    obj.c = 30; 
    obj.d = 40; 

    cout<< "\n A : "<< obj.a; 
    cout<< "\n B : "<< obj.b; 
    cout<< "\n C : "<< obj.c; 
    cout<< "\n D : "<< obj.d; 
 }
 /* Output *//*
A : 100
B : 20
C : 30
D : 40
*/
