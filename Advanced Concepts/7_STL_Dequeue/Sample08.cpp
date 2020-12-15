//deque::push_front() in C++ STL
// CPP program to illustrate 
// push_front() function 
#include <deque> 
#include <iostream> 
using namespace std; 
  
int main() 
{ 
    deque<int> mydeque{ 1, 2, 3, 4, 5 }; 
    mydeque.push_front(6); 
  
    // deque becomes 6, 1, 2, 3, 4, 5 
  
    for (auto it = mydeque.begin(); 
         it != mydeque.end(); ++it) 
        cout << ' ' << *it; 
} 
// Output:
// 6 1 2 3 4 5