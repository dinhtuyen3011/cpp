#include <iostream> 
using namespace std;

const int h()
{
    return 100;
}

int main()
{
    const int j = h();    //j = 100
    int k = h();          //k = 100
    j++;  //Compilation error 
    return 0;
}