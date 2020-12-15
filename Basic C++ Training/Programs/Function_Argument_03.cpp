#include <iostream>
#include <cmath>
using namespace std;
//function prototype definition in c++
int sum(); 

int main() 
{ 
    int num; 
    num = sum(); 
    cout<<"Sum of two given values = "<< num <<endl; 
    return 0; 
} 
  
int sum() 
{ 
    int a = 50, b = 80, sum; 
    sum = sqrt(a) + sqrt(b); 
    return sum; 
}
/* Output */
//Sum of two given values = 16


