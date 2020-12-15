#include <iostream> 
using namespace std; 
//function prototype definition in c++
void fun(int x);
  
int main() { 
    int x = 20;
    fun(x); 
    cout << "x = " << x; 
    return 0; 
}

void fun(int x) { 
    x = 30;
}

/* Output */
// x = 20
