#include   <iostream>
using namespace std;

int funcstatic(int)
{
       // local variable should exist locally...
       int sum = 0; //Non-Static
       sum = sum + 10;
       return sum;
}

int main()
{
       int r = 5, s;

       // test the function calls several times...
       cout<<"Without static keyword\n";
       cout<<"----------------------\n";
       s = funcstatic(r);

       cout<<"1st time function call, s = "<<s<<endl;
       s = funcstatic(r);
       cout<<"2nd time function call, s = "<<s<<endl;

       s = funcstatic(r);
       cout<<"3rd time function call, s = "<<s<<endl;
       return 0;
}
/* Output */
Without static keyword
----------------------
1st time function call, s = 10
2nd time function call, s = 10
3rd time function call, s = 10
