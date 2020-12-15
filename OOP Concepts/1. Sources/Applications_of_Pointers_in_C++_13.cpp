#include <iostream>
using namespace std;
class Data
{
    public:
	    int a; 
	    void print() 
	    { 
	        cout << "a is "<< a <<endl; 
	    }    
};

int main() {
	//1. Khai bao bien doi tuong
	Data d, *dp;
    dp = &d; 
    
    //2. Thiet lap cho con tro tham chieu den dia chi cua bien thanh vien a
    int Data::*ptr = &Data::a; 
    
    //3. Thiet lap gia tri cho bien thanh vien a
    d.*ptr = 10;
    d.print();

    dp->*ptr = 20;  //a = 20
    dp->print();
    
    dp->a = 30;     //a = 30
    dp->print();
    
	return 0;
}
/* Output */
a is 10
a is 20
a is 30
