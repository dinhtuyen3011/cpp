/* Deleting pointer with or without value */
#include <iostream> 
using namespace std; 
  
int main() 
{ 
    // Creating int pointer  
    int* ptr1 = new int;  
      
    // Initializing pointer with value 20 
    int* ptr2 = new int(20);  
  
    cout << "Value of ptr1 = " << *ptr1 << "\n"; 
    cout << "Value of ptr2 = " << *ptr2 << "\n"; 
  
    delete ptr1; // Destroying ptr1 
    delete ptr2; // Detroying ptr2 
  
    return 0; 
} 
/* Output *//*
Value of ptr1 = 8526576
Value of ptr2 = 20
*/