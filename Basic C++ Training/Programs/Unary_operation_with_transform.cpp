#include <iostream>    
#include <algorithm>    // std::transform
using namespace std;

// Unary function applied by the transform function
int op_increment (int x) { 
  x = x + 1;
  return x; 
}

int Unary_operation_with_transform() {
  int n = 5;        // Number of elements in the array.
  int input_array[] = {3, 6, 8, 13, 2};
  int output_array[n];    // The array that will store out result
  std::cout << "Input array:";
  for(int i=0; i<5; i++){
    cout << ' ' << input_array[i];
  }
  cout << '\n';

  // The function takes start and end positions of the
  // range on which we want to apply our function. It
  // also takes the starting position of our output
  // array and the function we want to apply to the array.
  transform (input_array, input_array+5, output_array, op_increment);
 
  std::cout << "The output array now contains:";
  for(int i=0; i<5; i++){
    cout << ' ' << output_array[i];
  }
  cout << '\n';

  return 0;
}
/* Output */
//Input array: 3 6 8 13 2
//The output array now contains: 4 7 9 14 3
