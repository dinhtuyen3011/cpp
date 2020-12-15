/* using operator ## called Token-Pasting operator */
#include <iostream>
using namespace std;
#define merge(a, b) a##b
int main()
{
    cout<<merge(12, 34)<<endl;
}
/* Output */
1234

