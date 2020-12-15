/*---- Syntax ------------*//*
initialization expression;
while (test_expression)
{
   // statements
 
  update_expression;
}
------------------------------*/
// C++ program to illustrate while loop 
#include <iostream> 
using namespace std; 
  
int Sample110() 
{ 
    // initialization expression 
    int i = 1; 
  
    // test expression 
    while (i < 6) 
    { 
        cout << "Hello World\n"; 
  
        // update expression 
        i++; 
    } 
  
    return 0; 
} 

