/* deleting memory dynamically allocated by malloc */
#include <bits/stdc++.h> 
using namespace std; 
  
int main() 
{ 
    // Dynamic memory allocated by using malloc 
    int* ptr2 = (int*)malloc(sizeof(int)); 
  
    delete ptr2; 
  
    cout << "ptr2 deleted successfully"; 
  
    return 0; 
} 
/* Output */
// ptr deleted successfully