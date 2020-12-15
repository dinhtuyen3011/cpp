/* deque insert() function in C++ STL */
// CPP program to illustrate the 
// deque::insert() function 
// insert elements by iterator 
#include <iostream> 
#include <deque>   
using namespace std; 
  
int main() 
{ 
    deque<int> deq = { 1, 2, 3, 4, 5 }; 
  
    deque<int>::iterator it = deq.begin(); 
    ++it; 
  
    it = deq.insert(it, 10); // 1 10 2 3 4 5 
    // dq.insert(it, 2, 10); 
  
    std::cout << "Deque contains:"; 
    for (it = deq.begin(); it != deq.end(); ++it) 
        cout << ' ' << *it; 
    cout << '\n';   
    return 0; 
} 
/* Output */
// Deque contains: 1 10 2 3 4 5