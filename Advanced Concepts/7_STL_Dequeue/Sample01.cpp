#include <iostream> 
#include <deque>   
using namespace std; 
  
void showdq(deque <int> deq) 
{ 
    deque <int> :: iterator it; 
    for (it = deq.begin(); it != deq.end(); ++it) 
        cout << '\t' << *it; 
    cout << '\n'; 
} 
  
int main() 
{ 
    deque <int> deq; 
    deq.push_back(10); 
    deq.push_front(20); 
    deq.push_back(30); 
    deq.push_front(15);

    cout << "The deque is : "; 
    showdq(deq); 
  
    cout << "\ndeq.size() : " << deq.size(); 
    cout << "\ndeq.max_size() : " << deq.max_size();   
    cout << "\ndeq.at(2) : " << deq.at(2); 
    cout << "\ndeq.front() : " << deq.front(); 
    cout << "\ndeq.back() : " << deq.back(); 
  
    cout << "\ndeq.pop_front() : "; 
    deq.pop_front(); 
    showdq(deq); 
  
    cout << "\ndeq.pop_back() : "; 
    deq.pop_back(); 
    showdq(deq);  
    return 0; 
} 
/* Output *//*
The deque is :     15    20    10    30
deq.size() : 4
deq.max_size() : 4611686018427387903
deq.at(2) : 10
deq.front() : 15
deq.back() : 30
deq.pop_front() :     20    10    30
deq.pop_back() :     20    10
*/