/* Trying to delete Non-pointer object */
#include <bits/stdc++.h> 
using namespace std; 
  
int main() 
{ 
    int x; 
  
    // Delete operator always 
    // requires pointer as input 
    delete x; 
  
    return 0; 
} 
/* Output */
error: type ‘int’ argument given to ‘delete’, expected pointer
