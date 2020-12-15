#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int arr[] = { 3, 5, 2, 4, 7 };
	sort(begin(arr), end(arr),
			[](auto const &i, auto const &j){
				return i > j;
			});
	for (int const &i: arr) {
		cout << i << ' ';
	}
	return 0;
}