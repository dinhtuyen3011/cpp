#include<iostream>
using namespace std;
//functions protype definition
int find_largest_small(int nums[], int n, int opt);

int main() {
    int nums[] = {23,6,328,34,12,234,9,23,4,54};
    int n = sizeof(nums) / sizeof(nums[0]);    
    cout << "\nLargest element of the said array: "<< find_largest_small(nums, n, 1);
    return 0;
}

/*
    - Options: 
      -> 0: small
      -> 1: largest
*/
int find_largest_small(int nums[], int n, int opt){
    int i;      
    int value = nums[0];    
    for (i = 1; i < n; i++){
        switch(opt){
            case 1: {
                if (nums[i] > value) 
                    value = nums[i];   
            }break;
            case 0: {
                if (nums[i] < value) 
                    value = nums[i];   
            }break;
        }
    }     
    return value; 
}