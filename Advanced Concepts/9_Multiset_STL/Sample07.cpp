// CPP code to illustrate multiset::get_allocator
#include <iostream>
#include <set>
using namespace std;

int main()
{
    multiset<int> mymultiset{1, 2, 3, 4, 5};
    int *p, *c;
    unsigned int i;

    // allocate an array of 5 elements
    // using myset's allocator:
    p = mymultiset
            .get_allocator()
            .allocate(5);
     c = mymultiset
            .get_allocator()
            .allocate(5);   
    // assign some values to array
    p[0] = 10;
    p[1] = 10;
    p[2] = 20;
    p[3] = 30;
    p[4] = 20;

    cout << "The allocated array contains: ";
    for (i = 0; i < 5; i++)
    {

        cout << p << " " << c;
    }
    cout << endl;
    cout << "The multiset elements are: ";
    for (auto it = mymultiset.begin(); it != mymultiset.end(); it++)
        cout << *it << " ";
    mymultiset.get_allocator().deallocate(p, 5);
    return 0;
}
// Output:
// The allocated array contains: 10 10 20 30 20