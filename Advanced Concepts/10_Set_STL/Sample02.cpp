// C++ code to illustrate the method 
// set::operator=() 
  
#include <iostream> 
#include <set>

using namespace std; 
  
// merge function 
template <class T> 
T merge(T a, T b) 
{ 
    T t(a); 
    t.insert(b.begin(), b.end()); 
    return t; 
} 
  
int main() 
{ 
    set<int> sample1, sample2, sample3; 
  
    // List initialization 
    sample1 = { 1, 2, 3, 4, 5 }; 
    sample2 = { 6, 7, 8, 1 }; 
  
    // Merge both sets and 
    // move the result to sample3 
    sample3 = merge(sample1, sample2);   
    // copy assignment 
    sample1 = sample3; 
  
    // Print the sets 
    for (auto it = sample1.begin(); it != sample1.end(); ++it)
        cout << *it << " ";    
    cout << endl; 
  
    for (auto it = sample2.begin(); it != sample2.end(); ++it)
        cout << *it << " ";   
    cout << endl; 
  
    for (auto it = sample3.begin(); it != sample3.end(); ++it)
        cout << *it << " ";    
    cout << endl;   
    return 0; 
} 
// Output:
// 1 2 3 4 5 6 7 8 
// 1 6 7 8 
// 1 2 3 4 5 6 7 8