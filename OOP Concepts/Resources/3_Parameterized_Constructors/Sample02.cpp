// C++ program to demonstrate constructors 
#include <iostream>
using namespace std;
class Person03 
{ 
    public: 
    int id; 
      
    //Default Constructor 
    Person03() 
    { 
        cout << "Default Constructor called" << endl;  
        id=-1; 
    } 
      
    //Parametrized Constructor 
    Person03(int x) 
    { 
        cout << "Parametrized Constructor called" << endl; 
        id=x; 
    } 
}; 
int main() { 
      
    // obj1 will call Default Constructor 
    Person03 obj1; 
    cout << "Person id is: " <<obj1.id << endl; 
      
    // obj1 will call Parametrized Constructor 
    Person03 obj2(21); 
    cout << "Person id is: " <<obj2.id << endl; 
    return 0; 
}
/* Output *//*
Default Constructor called
Person id is: -1
Parametrized Constructor called
Person id is: 21
*/