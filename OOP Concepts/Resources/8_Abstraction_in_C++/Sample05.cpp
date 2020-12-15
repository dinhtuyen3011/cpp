#include <iostream>
using namespace std;
class A
{
  protected:
    int a,b;

  public:
<<<<<<< HEAD
<<<<<<< HEAD
    A(): a(10), b(a+10) {}
=======
<<<<<<< HEAD
    A(): b(10), a(10) {}
>>>>>>> 99d033885a33519bc3dd8bdda89b8a5d0e898e4c
    A(int na,int nb): a(na), b(nb) {}
=======
    A(): a(10), b(10) {}
    A(int na,int nb): a(na), b(a+10) {}
>>>>>>> 2c4b6a106f0f4208622888145c863e113ec74d33
=======
<<<<<<< HEAD
<<<<<<< HEAD
    A(): a(10), b(20) {}
    A(int na, int nb): a(na), b(nb) {}
=======
    A(): a(10), b(a+10) {}
    A(int na,int nb): a(na), b(a+10) {}
>>>>>>> dev01
=======
    A(): a(10), b(10) {}
    A(int na,int nb): a(nb), b(a+10) {}
>>>>>>> dev03
=======
    A(): a(10), b(10) {}
    A(int na,int nb): a(na), b(a+10) {}
>>>>>>> dev04
>>>>>>> master
    virtual void print() = 0; // Reason to be an abstract class
=======
    A(): a(10), b(a+10) {}
    A(int na,int nb): a(na), b(nb) {}
    virtual void print() = 0; // Reason to be an abstract class3
>>>>>>> 1a6d74e6d3f81020b341c608a31ff60676d0d89b
};

class B : public A
{
  public:
<<<<<<< HEAD
  	B(){}
=======
<<<<<<< HEAD
  	B(){}
=======
    B(): A(){}
>>>>>>> 1a6d74e6d3f81020b341c608a31ff60676d0d89b
>>>>>>> dev04
    B(int a, int b) : A(a,b){}
    void print()
    {
      cout << a << endl;
      cout << b << endl;
    }
};

int main(){
<<<<<<< HEAD
  B clase(3,2);

  
=======
  B clase;
>>>>>>> master
  clase.print();
  return 0;
}
/* Output *//*
3
2
*/
