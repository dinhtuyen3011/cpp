#include<iostream>
using namespace std;
#define value 40

#if value > 200
   #undef value
   #define value 200
#elif value < 50
   #undef value
   #define value 50
#else
   #undef value
   #define value 100
#endif

int main()
{
    cout <<"Value = "<< value;
}
/* Output */
Value = 250
