// C++ program to demonstrate function  
// declaration outside class   
#include <bits/stdc++.h> 
using namespace std; 
class Person02 
{ 
    public: 
    string fullName; 
    int id; 
      
    // printname is not defined inside class definition 
    void printname(); 
      
    // printid is defined inside class definition 
    void printid() 
    { 
        cout << "Id is: " << id; 
    }
}; 
  
// Definition of printname using scope resolution operator :: 
void Person02::printname() 
{ 
    cout << "FullName is: " << fullName;  
}

/* Complier time *//*
void Person::printid(){	
	cout<< "Id is: "<<id;
}
*/
 
int main() { 
      
    Person02 obj; 
    obj.fullName = "IMIC Technology"; 
    obj.id=100; 
      
    // call printname() 
    obj.printname(); 
    cout << endl; 
      
    // call printid() 
    obj.printid(); 
    
    return 0; 
}
/* Output */
// FullName is: IMIC Technology
// Id is: 100

