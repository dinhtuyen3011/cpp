#include <iostream>
using namespace std;
class A
{
private:
  int a, b;

public:
  int x, y;
  void setdata(int x, int y) /*Assigning private data members*/
  {
    a = x;
    b = y;
  }
  void showdata()
  {
    cout << "\nValue ofa=" << a << "\nValue ofb=" << b << endl;
  }
  A operator+(A obj)
  {
    A temp;
    temp.a = a + obj.a;
    temp.b = b + obj.b;
    return (temp);
  }
  A operator ()(A &obj){
    A tmp;
    tmp.a=a+obj.a;
    tmp.b=b+obj.b;
  }
};
int main()
{
  A obj1, obj2, obj3;
  obj1.setdata(4, 5);
  obj2.setdata(2, 3);
  obj3 = obj1 + obj2; /* The same line can be written as obj3=obj1.operator+(obj2);*/
  obj3.showdata();
}