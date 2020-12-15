#include <iostream> 
#include <list> 
#include <iterator> 
using namespace std; 
  
//function for printing the elements in a list 
void showlist(list <int> li) 
{ 
    list <int> :: iterator it; 
    for(it = li.begin(); it != li.end(); ++it) 
        cout << '\t' << *it; 
    cout << '\n'; 
} 
  
int main() 
{ 
  
    list <int> lis01, lis02;     
    for (int i = 0; i < 10; ++i) 
    { 
        lis01.push_back(i * 2); 
        lis02.push_front(i * 3); 
    } 
    cout << "\nList 1 (lis01) is : "; 
    showlist(lis01); 
  
    cout << "\nList 2 (lis02) is : "; 
    showlist(lis02); 
  
    cout << "\nlist1.front() : " << lis01.front(); 
    cout << "\nlist1.back() : " << lis01.back(); 
  
    cout << "\nlist1.pop_front() : "; 
    lis01.pop_front(); 
    showlist(lis01); 
  
    cout << "\nlist2.pop_back() : "; 
    lis02.pop_back(); 
    showlist(lis02); 
  
    cout << "\nlist1.reverse() : "; 
    lis01.reverse(); 
    showlist(lis01); 
  
    cout << "\nlist2.sort(): "; 
    lis02.sort(); 
    showlist(lis02); 
  
    return 0;   
} 