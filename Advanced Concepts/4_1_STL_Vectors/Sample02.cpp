#include <iostream>     // std::cout
#include <functional>   // std::greater
#include <algorithm>    // std::sort
#include<vector>
using namespace std;
int main()
{
	//1. 
    vector<int> v;
	
	//2. 
    for (int i = 1; i <= 5; i++)
        v.push_back(i);
	
    cout << "Size : " << v.size();
    cout << "\nCapacity : " << v.capacity();
    cout << "\nMax_Size : " << v.max_size();
	
    // resizes the vector size to 4
    v.resize(7);
	cout << "\nCapacity : " << v.capacity();
	
    // prints the vector size after resize()
    cout << "\nSize : " << v.size();

    // checks if the vector is empty or not
    if (v.empty() == false)
        cout << "\nVector is not empty";
    else
        cout << "\nVector is empty";

    // Shrinks the vector
    v.shrink_to_fit();
    cout << "\nCapacity : " << v.capacity();
    
    cout << "\nVector elements are: ";
    for_each(v.begin(), v.end(), [](int x) {
       cout << x << " ";
    });

    return 0;
}
/* Output *//*
Size : 5
Capacity : 8
Max_Size : 4611686018427387903
Size : 7
Vector is not empty
Vector elements are: 1 2 3 4 5 0 0 */