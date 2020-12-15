#include <iostream> 
#include <tuple>
using namespace std; 

int main() 
{ 
    //1. Khai bao Tuple 
    tuple <char, int, float> tpl; 
  
    //2. Khoi tao gia tri cho tuple
    tpl = make_tuple('a', 10, 15.5); 
  
    //3. Hien thi gia tri su dung get() 
    cout << "The initial values of tuple are : ";
    cout << get<0>(tpl) << " " << get<1>(tpl);
    cout << " " << get<2>(tpl) << endl;
  
    //4. Su dung get() de thay doi gia tri cua tuple 
    get<0>(tpl) = 'b'; 
    get<2>(tpl) =  20.5; 
  
     //5. Hien thi su thay doi gia tri trong tuple 
    cout << "The modified values of tuple are : "; 
    cout << get<0>(tpl) << " " << get<1>(tpl); 
    cout << " " << get<2>(tpl) << endl; 
  
    return 0; 
} 
/* Output *//*
The initial values of tuple are : a 10 15.5
The modified values of tuple are : b 10 20.5
*/
