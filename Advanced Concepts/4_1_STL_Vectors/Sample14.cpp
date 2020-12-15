// Initializing vector object using initializer 
// list. 
#include <iostream> 
#include <vector> 
using namespace std; 
  
class MyClass { 
    vector<int> vec; 
  
public: 
    MyClass(vector<int> v) : vec(v) 
    { 
    } 
    void print() 
    { 
        /// print the value of vector 
        for (int i = 0; i < vec.size(); i++) 
            cout << vec[i] << " "; 
    } 
}; 
  
int main() 
{ 
    vector<int> vec; 
    for (int i = 1; i <= 5; i++) 
        vec.push_back(i); 
    MyClass obj(vec); 
    obj.print(); 
    return 0; 
} 
// 1 2 3 4 5