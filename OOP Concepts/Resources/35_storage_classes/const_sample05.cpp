#include <iostream> 
using namespace std;

class Test
{
    const int i;
    public:
    Test(int x):i(x)
    {
        i = x;  //Compilation error 
        cout << "\ni value set: " << i;
    }
};

int main()
{
    Test t(10);
    Test s(20);
}
/*
i value set: 10
i value set: 20
*/