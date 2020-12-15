#include <iostream>     // std::cout
#include <functional>   // std::greater
#include <algorithm>    // std::sort
#include<vector>
using namespace std;
int main()
{
	//1.
    vector<int> v;
<<<<<<< HEAD
	cout<<"Size:"<<v.size();
	vector<int>::iterator *it;
	//2. 
    for (int i = 1; i <= 5; i++)
        v.push_back(i*10);
    for(*it=v.begin();*it!=v.end();*it++){
        
    }
	//3. 
    cout << "Output of begin and end: ";
    for_each(v.begin(), v.end(), [](int x) {
       cout << x << " ";
    });
	v.resize(3);
    
    cout << "Output of begin and end: ";
    for_each(v.begin(), v.end(), [](int x) {
       cout << x << " ";
    });
    v[0]=20;
    v.resize(5);
	//4. 
=======
	cout<<"Size:"<<v.size()<<endl;

	//2.
    for (int i = 1; i <= 5; i++)
        v.push_back(i*10);

	//3.
    cout << "Output of begin and end: ";
    cout<<v;

	//4.
>>>>>>> 3cec54c9a9d1f17f72345b35fa7fa21994a09304
    cout << "\nOutput of cbegin and cend: ";
    for_each(v.cbegin(), v.cend(), [](int x) {
       cout << x << " ";
    });

    //5.
    cout << "\nOutput of rbegin and rend: ";
    for_each(v.rbegin(), v.rend(), [](int x) {
       cout << x << " ";
    });

	//6.
    cout << "\nOutput of crbegin and crend : ";
    for_each(v.crbegin(), v.crend(), [](int x) {
       cout << x << " ";
    });
    return 0;
}
/* Output *//*
Output of begin and end: 1 2 3 4 5
Output of cbegin and cend: 1 2 3 4 5
Output of rbegin and rend: 5 4 3 2 1
Output of crbegin and crend : 5 4 3 2 1
*/
