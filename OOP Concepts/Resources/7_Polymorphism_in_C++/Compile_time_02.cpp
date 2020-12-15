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
};
int main()
{
  B obj;
  int q, w, r;
  cout << "Enter 3 numbers for showing function overriding: ";
  cin >> q >> w >> r;

  cout << "The number retuns the sum of only two numbers(Function Overriding): " 
    << obj.add(q, w, r) << endl;
  return (0);
}
/*
The number retuns the sum of only two numbers(Function Overriding): 
The first number: 10
The second number:20
The third number:30
*/
