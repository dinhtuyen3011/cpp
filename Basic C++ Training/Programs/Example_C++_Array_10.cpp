#include <iostream>
using namespace std;
int main()
{
	int arr[10], n,greaterIntergers = 0;

	for (n = 0; n < 10; n++) {
		cout << "Input an Interger ";
		cin >> arr[n];

		if (arr[n] >= 10) {
			greaterIntergers++;
		}
	}

	cout << greaterIntergers << " intergers are greater than or equals to 10" << endl;

	return 0;
}
