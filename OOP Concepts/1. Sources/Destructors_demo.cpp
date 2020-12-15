/* Destructors */
// C++ program to explain destructors   
#include <bits/stdc++.h> 
using namespace std; 
class Person05 
{ 
    public: 
    int id; 
      
    //Definition for Destructor 
    ~Person05() 
    { 
        cout << "Destructor called for id: " << id <<endl;  
    } 
}; 
  
int main()  
  { 
    Person05 obj1; 
    obj1.id=7; 
    int i = 0; 
    while ( i < 5 ) 
    { 
        Person05 obj2; 
        obj2.id=i; 
        i++;         
    } // Scope for obj2 ends here 
  
    return 0; 
  } // Scope for obj1 ends here
  /* Output *//*
Destructor called for id: 0
Destructor called for id: 1
Destructor called for id: 2
Destructor called for id: 3
Destructor called for id: 4
Destructor called for id: 7
  */
  
  
