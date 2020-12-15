#include <iostream>  
#include <vector>  
#include <algorithm>  
  
using namespace std;  
  
int main()  
{  
    vector<int> v = {3, 1, 4, 2, 5};      
    cout<<"Before sorting: ";  
    for_each(v.begin(), v.end(), [](int x) {  
    	cout << x << " ";  
  	});  
  
    sort(v.begin(), v.end());  
    
    cout<<"\nAfter sorting:  ";  
    for_each(v.begin(), v.end(), [](int x) {  
      cout << x << " ";  
    }); 
      
  return 0;  
}  
/* Output *//*
Before sorting: 3 1 4 2 5
After sorting:  1 2 3 4 5
*/