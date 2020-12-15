#include <iostream>
using namespace std;

int main () {
    double* pvalue  = NULL;
    if( !(pvalue  = new double )) {
       cout << "Error: out of memory." <<endl;
       exit(1);
    }
   return 0;
}

