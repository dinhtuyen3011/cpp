#include <iostream> 
#include <tuple>
using namespace std;
 
int main() 
{ 
    //1. Khai bao va khoi tao tuple 01 
    tuple <int,char,float> tup1(20,'a',17.5); 
  
    //2. Khai bao va khoi tao tuple 02 
    tuple <int,char,float> tup2(30,'b',10.5); 
      
    //3. Noi 2 tuples de tao ra 1 tuple moi 
    auto tup3 = tuple_cat(tup1,tup2);
      
    // Displaying new tuple elements 
    cout << "The new tuple elements in order are : "; 
    cout << get<0>(tup3) << " " << get<1>(tup3) << " "; 
    cout << get<2>(tup3) << " " << get<3>(tup3) << " "; 
    cout << get<4>(tup3) << " " << get<5>(tup3) << endl; 
  
    return 0; 
} 
