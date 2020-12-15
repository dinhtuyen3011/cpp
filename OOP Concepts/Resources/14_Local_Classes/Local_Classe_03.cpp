
/* Output */
// Local Class method() called


// PROGRAM 2 
#include<iostream> 
using namespace std; 
  
void fun() 
{ 
    class Test  // local to fun 
    { 
       public: 
          void method();
    }; 
      
    // Error as the method is defined outside the local class 
    void Test::method() 
    { 
        cout << "Local Class method()"; 
    } 
} 
  
int main() 
{ 
    return 0; 
}
/* Output *//*
Compiler Error:
 In function 'void fun()':
 error: a function-definition is not allowed here before '{' token
 */
