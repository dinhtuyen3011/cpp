#include <iostream> 
using namespace std; 
  
int main() { 
   int arr[] = {10, 20, 30, 40, 50, 60}; 
   int *ptr = arr; 
   cout << "arr[2] = "<< arr[2] <<"\n"; 
   cout << "*(arr + 2) = "<< *(arr + 2)<<"\n"; 
   cout << "ptr[2] = "<< ptr[2]<< "\n"; 
   cout << "*(ptr + 2) = "<< *(ptr + 2)<< "\n"; 
   return 0; 
} 
/* Output */
arr[2] = 30
*(arr + 2) = 30
ptr[2] = 30
*(ptr + 2) = 30
