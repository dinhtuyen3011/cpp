#include <iostream>
using namespace std;

void searching(int[]);
void printarray(int[]);
void main() {

	int array[10];
	
	cout << "Enter 10 integers: ";

	for (int x = 0; x < 10; x += 1) {
		cout << "Enter the " << x + 1 << "'st element: ";
		cin >> array[x];
	}
	searching(array);
	printarray(array);
}
void searching(int a[]) {
	int total = 0;
	for (int i = 0; i < 10; i += 1) {
		if (a[i] <= 10) {
		total = total + 1;
		}
	}
	cout << "there is a total of " << total << " less or equal to 10!" << endl;
}
void printarray(int a[]) {

	cout << "the number entered are: ";
		for (int j = 0; j < 10; j += 1) {
			cout <<"\t"<<a[j];
		}
}
