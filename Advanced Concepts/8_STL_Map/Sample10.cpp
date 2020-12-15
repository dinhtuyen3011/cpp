// map lower_bound() function in C++ STL
// C++ function for illustration 
// map::lower_bound() function 
#include <bits/stdc++.h> 
using namespace std; 
  
int main() 
{   
    // initialize container 
    map<int, int> mp; 
  
    // insert elements in random order 
    mp.insert({ 2, 30 }); 
    mp.insert({ 1, 10 }); 
    mp.insert({ 5, 50 }); 
    mp.insert({ 4, 40 }); 
    for (auto it = mp.begin(); it != mp.end(); it++) { 
        cout << (*it).first << " " << (*it).second << endl;
    } 
  
    // when 2 is present 
    auto it = mp.lower_bound(2); 
    cout << "The lower bound of key 2 is "; 
    cout << (*it).first << " " << (*it).second << endl; 
  
    // when 3 is not present 
    // points to next greater after 3 
    it = mp.lower_bound(3); 
    cout << "The lower bound of key 3 is "; 
    cout << (*it).first << " " << (*it).second; 
  
    // when 6 exceeds 
    it = mp.lower_bound(11); 
    cout << "\nThe lower bound of key 6 is "; 
    cout << (*it).first << " " << (*it).second; 
    return 0; 
} 
// Output :
// 1 10
// 2 30
// 4 40
// 5 50
// The lower bound of key 2 is 2 30
// The lower bound of key 3 is 4 40
// The lower bound of key 6 is 4 0