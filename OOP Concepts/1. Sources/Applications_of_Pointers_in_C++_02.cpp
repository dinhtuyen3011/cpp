/* For accessing array elements */

// C++ program to demonstrate that compiler 
// internally uses pointer arithmetic to access 
// array elements. 
#include <iostream> 
using namespace std; 
  
int main() 
{ 
    int arr[] = { 100, 200, 300, 400 }; 
  
    // Compiler converts below to *(arr + 2).
    cout << arr[2] << " "; 
  
    // So below also works. 
    cout << *(arr + 2) << " "; 
  
    return 0; 
}
/* Output */
// 300 300
