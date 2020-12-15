/*
 auto: The auto keyword provides type inference capabilities, 
 using which automatic deduction of the data type of an expression 
 in a programming language can be done. 
 This consumes less time having to write out things the compiler 
 already knows. 
 As all the types are deduced in compiler phase only, the time 
 for compilation 
 increases slightly but it does not affect the run time of the 
 program. 
 This feature also extends to functions and non-type template 
 parameters. 
*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;   
  
int main() 
{      
    auto a = 10; 
    auto b = 8.5; 
    auto c = "IMIC Technology"; 
    auto d = 'I'; 
  
    cout << a << " \n"; 
    cout << b << " \n"; 
    cout << c << " \n"; 
    cout << d << " \n";   
    return 0; 
}
/* Output *//*
10
8.5
IMIC Technology
I
*/