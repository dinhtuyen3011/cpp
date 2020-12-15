// C++ code to demonstrate the working of  
// sort_heap() 
#include<bits/stdc++.h>  
using namespace std; 
int main() 
{       
    // Initializing a vector 
    vector<int> v1 = {20, 30, 40, 25, 15}; 
      
    // Converting vector into a heap 
    // using make_heap() 
    make_heap(v1.begin(), v1.end()); 
      
    // Displaying heap elements  
    cout << "The heap elements are : "; 
    for (int &x : v1)  
       cout << x << " "; 
    cout << endl; 
      
    // sorting heap using sort_heap() 
    sort_heap(v1.begin(), v1.end()); 
      
     // Displaying heap elements  
    cout << "The heap elements after sorting are : "; 
    for (int &x : v1)  
       cout << x << " ";       
    return 0; 
} 
// Output:
// The heap elements are : 40 30 20 25 15 
// The heap elements after sorting are : 15 20 25 30 40 