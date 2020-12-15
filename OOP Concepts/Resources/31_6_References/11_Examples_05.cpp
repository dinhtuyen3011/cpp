#include<iostream>
using namespace std;
int *findMax(int arr[],int n);

int main()
{
  int size;
  cout<<"Enter number of data values: ";
  cin>>size;

  int *ptr=new int [size];

  for(int i=0;i<size;i++)
    {
     cout<<"Enter value" <<i+1<<": ";
     cin>>ptr[i];
    }

  cout<<*findMax(ptr,size);
  delete ptr;
}

int *findMax(int arr[],int n)
{
  int *max=arr;
  for(int i=0;i<n;i++)
    {
     if(arr[i]>*max){
        *max=arr[i];
     }
    }
  return max;
}
/* Output *//*
Enter number of data values: 5
Enter value1: 6
Enter value2: 7
Enter value3: 34
Enter value4: 68
Enter value5: 78
78
*/
