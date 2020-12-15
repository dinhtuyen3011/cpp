#include <iostream>
using namespace std;
class FunctionOverloading
{
public:
    void calculation(int a, int b, int k) /*addition of two numbers*/
    {
        cout << "The sum is = " << a + b + k << endl;
    }
    void calculation(double c, double d, double e) /*Multiplication of two numbers*/
    {
        cout << "Multiplication is = " << c * d * e << endl;
    }
    int calculation(int f, int g)
    {
        return (f / g);
    }
};
int main()
{
    FunctionOverloading obj;
    obj.calculation(5, 6, 7);
    obj.calculation(2.34, 4., 6.72);
    cout << "The division is=" << obj.calculation(10, 5) << endl;
}
