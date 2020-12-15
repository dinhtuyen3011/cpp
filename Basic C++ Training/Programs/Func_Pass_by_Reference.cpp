#include <iostream>
using namespace std;
//function prototype definition in c++
void fun(int *var);

int main() {
    int x = 20;
    cout << "x = "<< &x <<endl;
    fun(&x);
    cout << "x = " << x;
    return 0;
}

void fun(int *var)
{
  cout<<"var = "<< var <<endl;
  *var = 100;
}

/* Output */
// x = 0x61fe1c
// var = 0x61fe1c
// x = 100
