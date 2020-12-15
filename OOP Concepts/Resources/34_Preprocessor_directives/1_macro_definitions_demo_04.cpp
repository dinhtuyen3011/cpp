#include <iostream>
#define MULTIPLY(a, b) a*b
using namespace std;
int main()
{
    // The macro is expended as 2 + 3 * 3 + 5, not as 5*8
    cout<<MULTIPLY(2+3, 3+5)<<endl;
    return 0;
}
/* Output */
// 16
