// multiset::operator= in C++ STL
// INTEGER MULISET EXAMPLE 
// CPP program to illustrate 
// Implementation of = operator 
#include <iostream> 
#include <set> 
using namespace std; 
   
int main() 
{ 
    multiset<int> mymultiset1{ 1, 7, 4, 9, 0}; 
    multiset<int> mymultiset2{ 3, 4 }; 
    mymultiset1 = mymultiset2; 
    cout << "mymultiset1 = "; 
    for (auto it = mymultiset1.begin(); 
              it != mymultiset1.end(); ++it) 
        cout << ' ' << *it; 
    return 0; 
} 
// Output:
// mymultilist1 = 3 4