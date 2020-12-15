#include <iostream> 
#include <set> 
#include <iterator> 
#include <algorithm>
using namespace std; 
  
int main() 
{ 
    // empty multiset container 
    multiset <int, greater <int> > multi1;         
  
    // insert elements in random order 
    multi1.insert(40); 
    multi1.insert(30); 
    multi1.insert(60); 
    multi1.insert(20); 
    multi1.insert(50); 
    multi1.insert(50); // 50 will be added again to the multiset unlike set 
    multi1.insert(10); 
    set<int> s1(multi1.begin(),multi1.end());
    for_each(s1.begin(),s1.end(),[s1](int i){
        cout<<i<<"\t";
    });
    // printing multiset 
    multiset <int, greater <int> > :: iterator itr; 
    cout << "\nThe multiset is : "; 
    for (itr = multi1.begin(); itr != multi1.end(); ++itr)    
        cout << '\t' << *itr;    
    cout << endl; 
    
  
    // assigning the elements from multi1 to multi2 
    multiset <int> multi2(multi1.begin(), multi1.end()); 
  
    // print all elements of the multiset gquiz2 
    cout << "\nThe multiset multi2 after assign from multi1 is : "; 
    for (itr = multi1.begin(); itr != multi1.end(); ++itr)    
        cout << '\t' << *itr;    
    cout << endl; 
  
    // remove all elements up to element with value 30 in gquiz2 
    cout << "\nmulti2 after removal of elements less than 30 : "; 
    multi2.erase(multi2.begin(), multi2.find(40)); 
    for (itr = multi2.begin(); itr != multi2.end(); ++itr)    
        cout << '\t' << *itr;    
  
    // remove all elements with value 50 in gquiz2 
    int num; 
    num = multi2.erase(50); 
    cout << "\nmulti2.erase(50) : "; 
    cout << num << " removed \t" ; 
    for (itr = multi2.begin(); itr != multi2.end(); ++itr)  
        cout << '\t' << *itr;    
  
    cout << endl; 
  
    //lower bound and upper bound for multiset gquiz1 
    cout << "multi1.lower_bound(40) : " 
         << *multi1.lower_bound(40) << endl; 
    cout << "multi1.upper_bound(40) : " 
         << *multi1.upper_bound(40) << endl; 
  
    //lower bound and upper bound for multiset gquiz2 
    cout << "multi2.lower_bound(40) : " 
         << *multi2.lower_bound(40) << endl; 
    cout << "multi2.upper_bound(40) : " 
         << *multi2.upper_bound(40) << endl;            
         return 0;   
} 