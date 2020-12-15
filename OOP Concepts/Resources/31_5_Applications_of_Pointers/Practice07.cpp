#include<iostream>
using namespace std;

int main(){
  int n;int i; int max=0;
  cout<<"Enter number of values:";
  cin>>n;

  cout<<"Enter values in array:\n";
  int arr[n];
  for(i=0;i<n;i++) {
     cin>>arr[i];
  }

  for(int j=0;j<n;j++){
   if (arr[j]>max)
     max=arr[j];
  }

  int *pointer= &max;
  cout<<"Largest integer value in the array is "<<*pointer;
  return 0;
}
/* Output *//*
Enter number of values:4
Enter values in array:
5
6
7
8
Largest integer value in the array is 8
*/