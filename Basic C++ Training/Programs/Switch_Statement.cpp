/*---------------- Syntax --------------*//*
switch (n)
{
    case 1: // code to be executed if n = 1;
        break;
    case 2: // code to be executed if n = 2;
        break;
    default: // code to be executed if n doesn't match any cases
}
-----------------------------------------------------------------*/
// Following is a simple C++ program  
// to demonstrate syntax of switch. 
#include <iostream> 
using namespace std; 
  
int main28() { 
int x = 2; 
    switch (x) 
    { 
        case 1:  
            cout << "Choice is 1"; 
            break; 
        case 2:  
            cout << "Choice is 2"; 
            break; 
        case 3:  
            cout << "Choice is 3"; 
            break; 
        default:  
            cout << "Choice other than 1, 2 and 3"; 
            break;   
    } 
return 0; 
}
/* Output */
// Choice is 2
