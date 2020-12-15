// map operator= in C++ STL
// C++ program for illustration of 
// map::operator= function 
#include <bits/stdc++.h> 
using namespace std; 
  
int main() 
{   
    // initialize container 
    map<int, int> mp, copymp; 
  
    // insert elements in random order 
    mp.insert({ 2, 30 }); 
    mp.insert({ 1, 40 }); 
    mp.insert({ 4, 50 }); 
  
    // = operator is used to copy map 
    copymp = mp; 
  
    // prints the elements 
    cout << "\nThe map mp is : \n"; 
    cout << "KEY\tELEMENT\n"; 
    for (auto itr = mp.begin(); itr != mp.end(); ++itr) { 
        cout << itr->first 
             << '\t' << itr->second << '\n'; 
    } 
  
    cout << "\nThe map copymap is : \n"; 
    cout << "KEY\tELEMENT\n"; 
    for (auto itr = copymp.begin(); itr != copymp.end(); ++itr) { 
        cout << itr->first 
             << '\t' << itr->second << '\n'; 
    } 
    return 0; 
} 
/* Output:*//*
The map mp is : 
KEY    ELEMENT
1    40
2    30
4    50

The map copymap is : 
KEY    ELEMENT
1    40
2    30
4    50
*/