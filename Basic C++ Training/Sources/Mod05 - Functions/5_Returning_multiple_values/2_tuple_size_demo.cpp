#include <iostream> 
#include <tuple>
using namespace std; 

int main() 
{   
    //1. Khoi tao tuple 
    tuple <char,int,float> tpl(20,'a', 17.5); 
  
    //2. Su dung size de xem kich thuoc cua tuple 
    cout << "The size of tuple is : "; 
    cout << tuple_size<decltype(tpl)>::value << endl; 
  
    return 0;   
} 
/* Output */
// The size of tuple is : 3
