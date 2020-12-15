/*
Write a C++ program to find the largest element of a given array of integers.
Original array:5 4 9 12 8 
Largest element of the said array: 12
*/
#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int find_largest_small(int nums[], int n, int opt);
int main(){
    int nums[] = {23,6,328,34,12,234,9,23,4,54};
    int n = sizeof(nums) / sizeof(nums[0]);    
    cout << "\nLargest element of the said array: "<< find_largest_small(nums, n, 1);
}

/*
    - Options: 
      -> 0: small
      -> 1: largest
*/
int find_largest_small(int nums[], int n, int opt) {
    return (opt==1) ? *max_element(nums, nums + n) :
                *min_element(nums, nums + n);
}