/* Examples for runtime polymorphism */
#include <iostream>
using namespace std;
class A
{
public:
  int add(int x, int y, int z)
  {
    return (x + y + z);
  }
};
class B : public A
{
public:
  int add(int x, int y, int z)
  {
    cout << "The first number: " << x << endl;
    cout << "The second number:" << y << endl;
    cout << "The third number:" << z << endl;
    return (x + y);
  }
};
int main()
{
  B obj;
  int q, w, r;
  cout << "Enter 3 numbers for showing function overriding: ";
  cin >> q >> w >> r;

  cout << "The number retuns the sum of only two numbers(Function Overriding): " << obj.add(q, w, r) << endl;
  return (0);
}
