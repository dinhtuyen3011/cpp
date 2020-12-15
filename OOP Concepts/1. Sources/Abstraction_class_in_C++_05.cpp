#include <iostream>
using namespace std;

class A
{
  protected:
  int a,b;
  
  public:
  A(): a(10), b(10) {}
  A(int na,int nb): a(na), b(nb) {}
  virtual void print() = 0; // Reason to be an abstract class
};

class B : public A
{
  public:
  B(int a, int b) : A(a,b){}
  void print()
  {
    cout << a << endl;
    cout << b << endl;
  }
};

int main(){
  B clase(3,2);
  clase.print();
  return 0;
}

