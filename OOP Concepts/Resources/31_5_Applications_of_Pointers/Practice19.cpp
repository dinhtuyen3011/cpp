#include <iostream>
using namespace std;
class Data
{ 
    public:
	    int f(float) 
	    { 
	        return 100; 
	    }
};
// Declaration and assignment
int (Data::*fp1) (float) = &Data::f;

// Only Declaration   
int (Data::*fp2) (float);        

int main() {
	Data d;
  // Assignment f member functions
  fp2 = &Data::f;   
  cout<<"-> F = "<< &fp2(2)<<endl;
  
	return 0;
}
/* Output *//*
-> F = 1
*/