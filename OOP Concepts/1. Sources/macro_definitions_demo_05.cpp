#include <iostream>
using namespace std;
//here, instead of writing a*a we write (a)*(b)
#define MULTIPLY(a, b) (a)*(b)
int main()
{
    // The macro is expended as (2 + 3) * (3 + 5), as 5*8
    cout<<MULTIPLY(2+3, 3+5)<<endl;
    return 0;
}
/* Output */
40

