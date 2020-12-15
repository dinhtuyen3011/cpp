#include <iostream>
#include <algorithm>
using namespace std;

struct comp {
	bool operator()(int const &i, int const &j) const {
		return i > j;
	}
};

int main()
{
	int arr[] = { 3, 5, 2, 4, 7 };
	sort(begin(arr), end(arr), comp());
	for (int const &i: arr) {
		cout << i << ' ';
	}
	return 0;
}
