#include <iostream>
using namespace std;

int count_the_number(int arr[], int n, int k)
{
    int result = 0;
    for (int i=0; i<n; i++)
        if (k == arr[i])
          result++;
    return result;
}
 
int main()
{
    int nums[] = {23,6,328,34,12,23,9,23,9,6};
    int n = sizeof(nums) / sizeof(nums[0]);    
    int k = 23;
    cout <<"\nNumber of occurrences of: " << count_the_number(nums, n, k);
    return 0;
}