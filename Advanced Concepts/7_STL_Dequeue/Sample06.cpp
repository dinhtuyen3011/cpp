/* deque resize() function in C++ STL */
// C++ program to illustrate the 
// deque::resize() function 
#include <iostream> 
#include <deque>  
using namespace std; 
  
int main() 
{ 
    deque<int> deq = { 10, 20, 30, 40, 50 };   
    cout << "Size before resize " << deq.size() << "\n"; 
  
    // Prints the deque elements 
    cout << "The contents of deque :"; 
    for (auto it = deq.begin(); it != deq.end(); ++it) 
        cout << *it << " "; 
  
    cout << endl; 
  
    // resize to 7 
    deq.resize(7); 
  
    // // Prints the deque elements after resize() 
    cout << "Size after resize " << deq.size() << "\n"; 
  
    cout << "The contents of deque :"; 
    for (auto it = deq.begin(); it != deq.end(); ++it) 
        cout << *it << " ";   
    return 0; 
} 
// Output:
// Size before resize 5
// The contents of deque :10 20 30 40 50 
// Size after resize 7
// The contents of deque :10 20 30 40 50 0 0