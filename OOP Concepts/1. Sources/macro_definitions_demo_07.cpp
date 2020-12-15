/* A token passed to macro can be converted to a string literal by using # before it */
#include <iostream>
using namespace std;
#define get(a) #a
int main()
{
    // IMIC Technology is changed to "IMIC Technology"
    cout<<get(IMIC Technology);
}
/* Output */
IMIC Technology

