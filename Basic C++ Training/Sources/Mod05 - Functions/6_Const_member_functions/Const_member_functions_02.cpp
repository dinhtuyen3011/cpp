/* For example the following program has compiler errors. */
#include <iostream> 
using namespace std; 
  
class Test { 
    int value; 
public: 
    Test(int v = 10) {value = v;} 
    int getValue() const {return value+100;}
}; 
  
int main() { 
	//1. Khai bao hang doi tuong
    const Test t;     
    cout << t.getValue(); 
    return 0; 
}
/* Output *//*
passing 'const Test' as 'this' argument of 'int 
Test::getValue()' discards qualifiers
=> Loi xay ra do doi tuong t duoc khai bao la const thi cac ham thanh vien
cung phai duoc khai bao la const de dam bao yeu to khong chinh sua.
=> int getValue() const {return value;}
*/
