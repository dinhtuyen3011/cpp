// STRING VECTOR EXAMPLE 
// CPP program to illustrate 
// Implementation of end() function 
#include <iostream> 
#include <string> 
#include <vector> 
using namespace std; 
  
int main() 
{ 
    // declaration of vector container 
    vector<string> myvector{ "computer", "science", "portal" }; 
  
    // using end() to print vector 
    for (auto it = myvector.begin(); 
         it != myvector.end(); ++it) 
        cout << ' ' << *it; 
    return 0; 
} 
/* Output */
// computer science portal