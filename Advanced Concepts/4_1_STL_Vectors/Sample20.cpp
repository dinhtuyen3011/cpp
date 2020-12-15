// C++ program to illustrate the 
// vector::capacity() function 
#include<iostream> 
#include<vector> // for vector 
#include<algorithm> // for copy() and assign() 
#include<iterator> // for back_inserter 
using namespace std;
  
int main() 
{ 
    int a[3] = { 1,2,3};
    vector<int> v; 
  
    // inserts elements 
    for (int i = 0; i < 10; i++) { 
        v.push_back(i * 10); 
    } 
  
    cout << "The size of vector is " << v.size(); 
    cout << "\nThe maximum capacity is " << v.capacity(); 
    return 0; 
} 
/* Output *//*
The size of vector is 10
The maximum capacity is 16
*/