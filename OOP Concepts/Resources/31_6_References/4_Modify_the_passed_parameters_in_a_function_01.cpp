/* Modify the passed parameters in a function : If a function receives a reference to a variable, 
it can modify the value of the variable. For example, in the following program variables are swapped 
using references.*/
#include<iostream> 
using namespace std; 
  
void swap (int& first, int& second) 
{ 
    int temp = first; 
    first = second; 
    second = temp; 
} 
  
int main() 
{ 
    int a = 2, b = 3; 
    swap( a, b ); 
    cout << a << " " << b; 
    return 0; 
}
/* Output *//*
3 2 
*/