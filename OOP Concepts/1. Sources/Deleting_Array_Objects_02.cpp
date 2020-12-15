//Deleting NULL pointer : Deleting a NULL does not cause any change and no error.
#include <bits/stdc++.h> 
using namespace std; 
  
int main() 
{ 
    // ptr is NULL pointer 
    int* ptr = NULL; 
  
    // deleting ptr 
    delete ptr; 
  
    return 0; 
} 
