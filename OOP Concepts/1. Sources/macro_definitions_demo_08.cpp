/* The macros can be written in multiple lines using ‘\’. The last line doesn’t need to have */
#include <iostream>
using namespace std;
#define PRINT(i, limit) while (i < limit)\
   {\
      cout<<"IMIC ";\
      i++;\
   }
int main()
{
    int i = 0;
    PRINT(i, 3);
    return 0;
}
/* Output */
IMIC IMIC IMIC

