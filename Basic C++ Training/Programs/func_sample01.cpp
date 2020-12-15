#include <iostream> 
using namespace std; 

//function prototype definition in c++
int max(int x, int y);
  
int main() { 
    int a = 10, b = 20;     
    int m = max(a, b);   
    cout << "max is " << m;    
    return 0;  
}

int max(int x, int y) {  
    if (x > y)  
    	return x;     
    return y;  
}
/* Output */
// max is 20
