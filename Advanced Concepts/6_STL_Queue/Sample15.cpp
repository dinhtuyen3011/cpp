// STRING QUEUE EXAMPLE 
// CPP program to illustrate 
// Implementation of emplace() function 
#include <iostream> 
#include <queue> 
using namespace std; 
  
int main() 
{ 
    queue<string> myqueue; 
    myqueue.emplace("This"); 
    myqueue.emplace("is"); 
    myqueue.emplace("a"); 
    myqueue.emplace("computer"); 
    myqueue.emplace("science"); 
    myqueue.emplace("portal"); 
        
    while (!myqueue.empty()) { 
        cout << ' ' << myqueue.front(); 
        myqueue.pop(); 
    }   
    return 0;       
} 