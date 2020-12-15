// bad_function_call example
#include <iostream>
#include <functional>
using namespace std;
int main()
{
    function<int()> f = nullptr;
    try {
        f();
    } catch(const bad_function_call& e) {
        cout << e.what() << 'dfdhf\n';
    }
}
// bad_function_call
// Exception thrown on bad call
