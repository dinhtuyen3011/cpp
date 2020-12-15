// C++ program to demonstrate that we can change 
// local values of one function in another using 
// pointers. 
#include <iostream> 
using namespace std; 
  
void swap(int* x, int* y) 
{ 
    int temp = *x; 
    *x = *y; 
    *y = temp; 
} 
  
int main() 
{ 
    int x = 10, y = 20; 
    swap(&x, &y); 
    cout << x << " " << y << endl; 
    return 0; 
}
/* Output */
// 20 10