#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int arr[] = { 3, 5, 2, 4, 7 };
	sort(begin(arr), end(arr), greater<>());
	// pass the template argument <int> to std::greater before C++14,
	// else the code won't compile
	for (int const &i: arr) {
		cout << i << ' ';
	}
	return 0;
}
