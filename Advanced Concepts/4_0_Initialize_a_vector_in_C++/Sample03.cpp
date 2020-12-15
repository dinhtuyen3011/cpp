/* Initializing like arrays */
// CPP program to initialize a vector like 
// an array. 
#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;  
  
int main() 
{ 
    vector<int> vect{ 10, 20, 30 }; 
  
    for (int x : vect) 
        cout << x << " "; 
  
    return 0; 
}
