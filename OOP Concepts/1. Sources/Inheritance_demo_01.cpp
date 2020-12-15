// C++ program to demonstrate implementation 
// of Inheritance 
   
#include <bits/stdc++.h> 
using namespace std; 
  
//Base class 
class Parent 
{ 
	private:
		int id_pr;
		
    public: 
      int id_p; 
}; 
   
// Sub class inheriting from Base Class(Parent) 
class Child : public Parent 
{ 
    public: 
      int id_c; 
}; 
  
//main function 
int main()  
{        
    Child obj; 
       
    // An object of class child has all data members 
    // and member functions of class parent 
    obj.id_c = 7;
    obj.id_p = 91;
    
    //obj.id_pr = 100; //Error
    
    cout << "Child id is " <<  obj.id_c << endl;
    cout << "Parent id is " <<  obj.id_p << endl;
      
    return 0; 
}
/* Output *//*
Child id is 7
Parent id is 91
*/
