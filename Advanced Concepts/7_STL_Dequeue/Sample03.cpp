// CPP program to illustrate the 
// deque::insert() function 
// program for third syntax 
#include <iostream> 
#include <deque>   
#include <vector>
using namespace std;  
  
int main() 
{ 
    deque<int> deq = { 1, 2, 3, 4, 5 };   
    deque<int>::iterator it = deq.begin(); 
    ++it; 
  
    vector<int> v(2, 10); 
  
    // 1 10 10 2 3 4 5 
    deq.insert(it, v.begin(), v.end()); 
  
    cout << "Deque contains:"; 
    for (it = deq.begin(); it != deq.end(); ++it) 
        cout << ' ' << *it; 
    cout << '\n';  
    return 0; 
} 
/* Output */
// Deque contains: 1 10 10 2 3 4 5