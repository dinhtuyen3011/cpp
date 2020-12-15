//deque::pop_front() and deque::pop_back() in C++ STL
// CPP program to illustrate 
// pop_front() function 
// CPP program to illustrate 
// application Of pop_front() function 
//PROGRAM 01
#include <iostream> 
#include <deque> 
using namespace std; 
   
int main() 
{ 
    deque<int> mydeque{}, newdeque{}; 
    mydeque.push_front(8); 
    mydeque.push_front(7); 
    mydeque.push_front(6); 
    mydeque.push_front(5); 
    mydeque.push_front(4); 
    mydeque.push_front(3); 
    mydeque.push_front(2); 
    mydeque.push_front(1); 
   
    //Deque becomes 1, 2, 3, 4, 5, 6, 7, 8 
   
    while (!mydeque.empty()) { 
        newdeque.push_front(mydeque.front()); 
        mydeque.pop_front(); 
    } 
    for (auto it = newdeque.begin(); it != newdeque.end(); ++it) 
        cout << ' ' << *it; 
} 
// Output:
// 8 7 6 5 4 3 2 1

//PROGRAM 02
// CPP program to illustrate 
// pop_back() function 
#include <iostream> 
#include <deque> 
using namespace std; 
   
int main() 
{ 
    deque<int> mydeque; 
    mydeque.push_front(5); 
    mydeque.push_front(4); 
    mydeque.push_front(3); 
    mydeque.push_front(2); 
    mydeque.push_front(1); 
    //Deque becomes 1, 2, 3, 4, 5 
  
    mydeque.pop_back(); 
    //Deque becomes 1, 2, 3, 4 
   
    for (auto it = mydeque.begin(); it != mydeque.end(); ++it) 
        cout << ' ' << *it; 
} 
// Output:
// 1 2 3 4

//PROGRAM 03
// CPP program to illustrate 
// application Of pop_back() function 
#include <iostream> 
#include <deque> 
using namespace std; 
   
int main() 
{ 
    deque<int> mydeque, newdeque; 
    mydeque.push_front(82); 
    mydeque.push_front(73); 
    mydeque.push_front(64); 
    mydeque.push_front(57); 
    mydeque.push_front(43); 
    mydeque.push_front(39); 
    mydeque.push_front(20); 
    mydeque.push_front(1); 
   
    //Deque becomes 1, 20, 39, 43, 57, 64, 73, 82 
   
    while (!mydeque.empty()) { 
        newdeque.push_back(mydeque.back()); 
        mydeque.pop_back(); 
    } 
    for (auto it = newdeque.begin(); it != newdeque.end(); ++it) 
        cout << ' ' << *it; 
} 
// Output:
// 82 73 64 57 43 39 20 1