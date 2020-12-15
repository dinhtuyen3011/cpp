/*---- Syntax --------*//*
initialization expression;
do
{
   // statements

   update_expression;
} while (test_expression);
---------------------------*/
// C++ program to illustrate do-while loop 
#include <iostream> 
using namespace std; 
  
int Sample111() 
{ 
    int i = 2; // Initialization expression 
  
    do
    { 
        // loop body 
        cout << "Hello World\n"; 
  
        // update expression 
        i++; 
  
    }  while (i < 1);   // test expression 
  
    return 0; 
}
/* Output */
// Hello World
