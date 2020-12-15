/* C++ code for  function with no arguments and no return value */
#include <iostream> 
using namespace std;

//function prototype definition in c++
void value(void); 

int main() 
{ 
    value(); 
    return 0;
} 

void value(void)
{ 
    int year = 1, period = 5, amount = 5000, inrate = 0.12; 
    float sum; 
    sum = amount; 
    while (year <= period) { 
        sum = sum * (1 + inrate); 
        year = year + 1; 
    } 
    cout<<" The total amount is: "<<sum<<endl;     
}
/* Output */
//- The total amount is: 5000
