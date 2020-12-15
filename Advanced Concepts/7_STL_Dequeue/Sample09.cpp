//deque::push_back() in C++ STL
// CPP program to illustrate 
// push_back() function 
#include <iostream> 
#include <deque> 
using namespace std; 
  
int main() 
{ 
    deque<int> mydeque{ 1, 2, 3, 4, 5 }; 
    mydeque.push_back(6); 
  
    // deque becomes 1, 2, 3, 4, 5, 6 
  
    for (auto it = mydeque.begin();  
              it != mydeque.end(); ++it) 
        cout << ' ' << *it; 
} 
// Output:
// 1 2 3 4 5 6