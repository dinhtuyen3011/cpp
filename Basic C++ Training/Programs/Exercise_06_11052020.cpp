/* Return Array from Functions in C++ */
#include <iostream>
using namespace std;

int* findmax(int arr[], int n, int k)
{
	//Khai bao mang phan tu
    int* max = new int[n];
    
    //Lay k phan tu lon nhat
    max[0] = arr[1];
    max[1] = arr[2];
    
    //Tra ket qua
    return max;
}

int main()
{
    int arr[] = {7, 8, 1, 5, 3, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int* ptr = findmax(arr,n,2);
    
    cout << ptr[0] << " " << ptr[1];

    return 0;
}
