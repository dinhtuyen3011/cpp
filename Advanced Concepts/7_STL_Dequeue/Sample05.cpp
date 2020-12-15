// CPP program to demonstrate the 
// deque::assign() function 
#include <iostream> 
#include <deque>  
using namespace std;
int main() 
{ 
    deque<int> deq; 
  
    // assign 5 values of 10 each 
    // Syntax: deque1_name.assign(iterator1, iterator2)
    deq.assign(5, 10); 
  
    cout << "The deque elements: "; 
    for (auto it = deq.begin(); it != deq.end(); it++) 
        cout << *it << " "; 
  
    deque<int> deq1; 
  
    // assigns all elements from 
    // the second position to deque1 
    deq1.assign(deq.begin() + 1, deq.end()); 
  
    cout << "\nThe deque1 elements: "; 
    for (auto it = deq1.begin(); it != deq1.end(); it++) 
        cout << *it << " "; 
    return 0; 
} 