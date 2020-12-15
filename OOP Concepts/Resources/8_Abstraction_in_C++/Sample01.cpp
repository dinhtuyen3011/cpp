#include <iostream>
using namespace std;
class A
{
public:
  virtual void test() = 0; //declaring a pure virtual function
};

class B : public A
{
public:
  void test()
  {
    cout << "Hello I am the virtual function running in derived class!! :)" << endl;
  }
};

int main(void)
{
  B obj;
  obj.test();
  return 0;
}
/* Output */
//Hello I am the virtual function running in derived class!! :)
