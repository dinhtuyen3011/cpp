// CPP program to demonstrate the 
// multiset::lower_bound() function 
#include <bits/stdc++.h> 
using namespace std; 
int main() 
{ 
  
    multiset<int> s; 
  
    // Function to insert elements 
    // in the multiset container 
    s.insert(1); 
    s.insert(3); 
    s.insert(3); 
    s.insert(5); 
    s.insert(4); 
  
    cout << "The multiset elements are: "; 
    for (auto it = s.begin(); it != s.end(); it++) 
        cout << *it << " "; 
  
    // when 3 is present 
    auto it = s.lower_bound(3); 
    cout << "\nThe lower bound of key 3 is "; 
    cout << (*it) << endl; 
  
    // when 2 is not present 
    // points to next greater after 2 
    it = s.lower_bound(2); 
    cout << "The lower bound of key 2 is "; 
    cout << (*it) << endl; 
  
    // when 10 exceeds the max element in multiset 
    it = s.lower_bound(10); 
    cout << "The lower bound of key 10 is "; 
    cout << (*it) << endl; 
  
    return 0; 
} 
// Output:
// The multiset elements are: 1 3 3 4 5 
// The lower bound of key 3 is 3
// The lower bound of key 2 is 3
// The lower bound of key 10 is 5