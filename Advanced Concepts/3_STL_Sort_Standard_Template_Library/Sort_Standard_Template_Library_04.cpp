#include <iostream>
#include <algorithm>
using namespace std;

int comp(int const &i, int const &j) {
	return i > j;
}

int main()
{
	int arr[] = { 3, 5, 2, 4, 7 };
	sort(begin(arr), end(arr), comp);
	for (int const &i: arr) {
		cout << i << ' ';
	}
	return 0;
}
