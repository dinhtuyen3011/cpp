/* deque assign() function in C++ STL */
// CPP program to demonstrate the 
// deque::assign() function 
#include <iostream> 
#include <deque>  
using namespace std;
int main() 
{ 
    deque<int> deq; 
  
    // assign 5 values of 10 each 
    deq.assign(5, 10); 
  
    cout << "The deque elements: "; 
    for (auto it = deq.begin(); it != deq.end(); it++) 
        cout << *it << " "; 
  
    // re-assigns 10 values of 15 each 
    // Syntax: deque_name.assign(size, val)
    deq.assign(10, 15); 
  
    cout << "\nThe deque elements: "; 
    for (auto it = deq.begin(); it != deq.end(); it++) 
        cout << *it << " "; 
    return 0; 
} 
/* Output *//*
The deque elements: 10 10 10 10 10 
The deque elements: 15 15 15 15 15 15 15 15 15 15
*/