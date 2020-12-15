//deque::front() and deque::back() in C++ STL
// CPP program to illustrate 
// Implementation of front() function 
#include <deque> 
#include <iostream> 
using namespace std; 
  
int main() 
{ 
    deque<int> mydeque; 
    mydeque.push_back(3); 
    mydeque.push_back(4); 
    mydeque.push_back(1); 
    mydeque.push_back(7); 
    mydeque.push_back(3); 
    // Queue becomes 3, 4, 1, 7, 3 
  
    cout << mydeque.front(); 
    return 0; 
} 
// Output:
// 3

// PROGRAM 02
// CPP program to illustrate 
// Implementation of back() function 
#include <deque> 
#include <iostream> 
using namespace std; 
  
int main() 
{ 
    deque<int> mydeque; 
    mydeque.push_back(3); 
    mydeque.push_back(4); 
    mydeque.push_back(1); 
    mydeque.push_back(7); 
    mydeque.push_back(3); 
    // Queue becomes 3, 4, 1, 7, 3 
  
    cout << mydeque.back(); 
    return 0; 
} 
// Output:
// 3


// PROGRAM 03
// CPP program to illustrate 
// application Of front() and back() function 
#include <deque> 
#include <iostream> 
using namespace std; 
  
int main() 
{ 
    deque<int> mydeque; 
    mydeque.push_back(8); 
    mydeque.push_back(7); 
    mydeque.push_back(6); 
    mydeque.push_back(5); 
    mydeque.push_back(4); 
    mydeque.push_back(3); 
    mydeque.push_back(2); 
    mydeque.push_back(1); 
  
    // deque becomes 8, 7, 6, 5, 4, 3, 2, 1 
  
    if (mydeque.front() > mydeque.back()) { 
        cout << mydeque.front() - mydeque.back(); 
    } 
    else if (mydeque.front() < mydeque.back()) { 
        cout << mydeque.back() - mydeque.front(); 
    } 
    else
        cout << "0"; 
} 
// Output:
// 7