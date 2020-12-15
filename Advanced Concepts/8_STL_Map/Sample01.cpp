#include <iostream> 
#include <iterator> 
#include <map>  
using namespace std; 
  
int main() 
{   
    // empty map container 
    map<int, int> mp1; 
  
    // insert elements in random order 
    mp1.insert(pair<int, int>(1, 40)); 
    mp1.insert(pair<int, int>(2, 30)); 
    mp1.insert(pair<int, int>(3, 60)); 
    mp1.insert(pair<int, int>(4, 20)); 
    mp1.insert(pair<int, int>(5, 50)); 
    mp1.insert(pair<int, int>(6, 50)); 
    mp1.insert(pair<int, int>(7, 10)); 
  
    // printing map 
    map<int, int>::iterator itr; 
    cout << "\nThe map is : \n"; 
    cout << "\tKEY\tELEMENT\n"; 
    for (itr = mp1.begin(); itr != mp1.end(); ++itr) { 
        cout << '\t' << itr->first 
             << '\t' << itr->second << '\n'; 
    } 
    cout << endl; 
  
    // assigning the elements from mp1 to mp2 
    map<int, int> mp2(mp1.begin(), mp1.end()); 
  
    // print all elements of the map gquiz2 
    cout << "\nThe map mp2 after"
         << " assign from mp1 is : \n"; 
    cout << "\tKEY\tELEMENT\n"; 
    for (itr = mp2.begin(); itr != mp2.end(); ++itr) { 
        cout << '\t' << itr->first 
             << '\t' << itr->second << '\n'; 
    } 
    cout << endl; 
  
    // remove all elements up to 
    // element with key=3 in mp2 
    cout << "\nmp2 after removal of"
            " elements less than key=3 : \n"; 
    cout << "\tKEY\tELEMENT\n"; 
    mp2.erase(mp2.begin(), mp2.find(3)); 
    for (itr = mp2.begin(); itr != mp2.end(); ++itr) { 
        cout << '\t' << itr->first 
             << '\t' << itr->second << '\n'; 
    } 
  
    // remove all elements with key = 4 
    int num; 
    num = mp2.erase(4); 
    cout << "\nmp2.erase(4) : "; 
    cout << num << " removed \n"; 
    cout << "\tKEY\tELEMENT\n"; 
    for (itr = mp2.begin(); itr != mp2.end(); ++itr) { 
        cout << '\t' << itr->first 
             << '\t' << itr->second << '\n'; 
    } 
  
    cout << endl; 
  
    // lower bound and upper bound for map mp1 key = 5 
    cout << "mp1.lower_bound(5) : "
         << "\tKEY = "; 
    cout << mp1.lower_bound(5)->first << '\t'; 
    cout << "\tELEMENT = "
         << mp1.lower_bound(5)->second << endl; 
    cout << "mp1.upper_bound(5) : "
         << "\tKEY = "; 
    cout << mp1.upper_bound(5)->first << '\t'; 
    cout << "\tELEMENT = "
         << mp1.upper_bound(5)->second << endl;   
    cout <<mp1.rbegin()->first<< endl;
    return 0; 
} 
/* Output *//*
The map mp1 is : 
    KEY    ELEMENT
    1    40
    2    30
    3    60
    4    20
    5    50
    6    50
    7    10

The map mp2 after assign from mp1 is : 
    KEY    ELEMENT
    1    40
    2    30
    3    60
    4    20
    5    50
    6    50
    7    10

mp2 after removal of elements less than key=3 : 
    KEY    ELEMENT
    3    60
    4    20
    5    50
    6    50
    7    10

mp2.erase(4) : 1 removed 
    KEY    ELEMENT
    3    60
    5    50
    6    50
    7    10

mp1.lower_bound(5) :     KEY = 5        ELEMENT = 50
mp1.upper_bound(5) :     KEY = 6        ELEMENT = 50
*/