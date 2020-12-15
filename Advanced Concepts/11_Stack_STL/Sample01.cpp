// CPP program to demonstrate working of STL stack 
#include <bits/stdc++.h> 
using namespace std; 
  
void showstack(stack <int> s) 
{ 
    while (!s.empty()) 
    { 
        cout << '\t' << s.top(); 
        s.pop(); 
    } 
    cout << '\n'; 
} 
  
int main () 
{ 
    stack <int> s; 
    s.push(10); 
    s.push(30); 
    s.push(20); 
    s.push(5); 
    s.push(1); 
  
    cout << "The stack is : "; 
    showstack(s); 
  
    cout << "\ns.size() : " << s.size(); 
    cout << "\ns.top() : " << s.top(); 
    
    cout << "\ns.pop() : "; 
    s.pop(); 
    showstack(s);   
    return 0; 
} 
/* Output:
The stack is :     1    5    20    30    10
s.size() : 5
s.top() : 1
s.pop() :     5    20    30    10
*/