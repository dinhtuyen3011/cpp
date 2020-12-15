/* 3) A Local class cannot contain static data members. It may contain static functions though */
// PROGRAM 1 
#include<iostream> 
using namespace std; 
  
void fun()   
{ 
      class Test  // local to fun 
      { 
         static int i; 
      }; 
} 
  
int main() 
{ 
    return 0; 
}
/* Output *//*
Compiler Error:
 In function 'void fun()':
 error: local class 'class fun()::Test' shall not have static data member 'int fun()::Test::i'
 */
 
 // PROGRAM 2 
#include<iostream> 
using namespace std; 
  
void fun() 
{ 
    class Test  // local to fun 
    { 
       public: 
        static void method() 
        { 
            cout << "Local Class method() called"; 
        } 
    };   
    Test::method(); 
} 
  
int main() 
{ 
    fun(); 
    return 0; 
}
/* Output */
// Local Class method() called
 
