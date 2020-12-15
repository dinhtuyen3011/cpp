#include <iostream> 
#include <tuple> 
using namespace std;
 
int main() 
{    
    //1. Khoi tao bien 
    int i_val = 100; 
    char ch_val; 
    float f_val;    
      
    //2. Khai bao khoi tao tuple
    tuple <int,char,float> tpl(20,'a',17.5); 
  
    //3. Su dung tie() khong su dung "ignore" 
    tie(i_val, ch_val, f_val) = tpl;    
    
    //4. Hien thi cac phan tu da duoc "unpacked" trong tuple ko su dung "ignore" 
    cout << "The unpacked tuple values (without ignore) are : "; 
    cout << i_val << " " << ch_val << " " << f_val <<endl; 
      
    // 5. Su dung tie() co su dung "ignore" 
    tie(i_val, ignore, f_val) = tpl;
      
    // 6. Hien thi cac phan tu da duoc "unpacked" trong tuple co su dung "ignore" 
    cout << "The unpacked tuple values (with ignore) are : "; 
    cout << i_val  << " " << f_val << endl; 
    
    return 0;   
}
/* Output *//*
The unpacked tuple values (without ignore) are : 20 a 17.5
The unpacked tuple values (with ignore) are : 20 17.5
*/
