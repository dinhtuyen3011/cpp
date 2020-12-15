/*
Write a C++ program to find k largest elements in a given array of integers.
Hint: using a sort() function in c++
Original array: 4 5 9 12 9 22 45 7 
Largest 4 Elements: 45 22 12 9
*/
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int nums[] = {23,6,328,34,12,234,9,23,4,54};
    int n = sizeof(nums) / sizeof(nums[0]);
    int k = 3;    
    sort(nums, nums + n, greater<int>());
    // Print the k largest elements 
    for (int i = 0; i < k; i++)
        cout << nums[i] << " ";
    return 0;
}
/* Output */
// 328 234 54