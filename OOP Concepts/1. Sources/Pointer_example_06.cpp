#include <iostream>
using namespace std;
int* findMax(int*, int);

int main()
{
  int arraySize;
  cout << "Size of the array: ";
  cin >> arraySize;
  int *Array = new int[arraySize]; //dynamic memory allocation

  for(int i=0; i<arraySize; i++){
    cout << "#" << i << " element: ";
    cin >> Array[i];
  }
  int* Max = findMax(Array, arraySize);
  cout << "The max value is " << *Max << endl;

  for(int i=0; i<arraySize; i++){
     cout << Array[i] << endl;
  }
  return 0;
}

int* findMax(int* formalArray, int formalArraySize){
  int* Max = formalArray;
  /*
  for(int i=1; i<formalArraySize; i++){
    if(formalArray[i] > *Max)
    Max = &formalArray[i];
  }*/

 for(int i=1; i<formalArraySize; i++){
  if(*Max < *(Max+i))
     *Max = *(Max+i);
 }
 return Max;
}

