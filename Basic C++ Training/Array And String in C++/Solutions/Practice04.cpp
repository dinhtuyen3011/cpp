/*
Write a C++ program to find the largest three elements in an array.
Original array: 7 12 9 15 19 32 56 70 
Three largest elements are: 70, 56, 32
*/
#include<iostream>
#include <tuple>
#include <climits>
using namespace std;
//functions protype
tuple<int,int,int> largest_three_element(int arr[], int size);

int main(){
    int nums[] = {23,6,328,34,12,234,9,23,4,54};
    int n = sizeof(nums) / sizeof(nums[0]);  
    if (n < 3)   
        cout << "Invalid Input";
    else
    {
        tuple<int,int,int> result = largest_three_element(nums, n);
        cout<<"-> first: "<<get<0>(result)<<endl;
        cout<<"-> second: "<<get<1>(result)<<endl;
        cout<<"-> third: "<<get<2>(result)<<endl;
    }    
    return 0;
}

tuple<int,int,int> largest_three_element(int arr[], int size){
    int i, first, second, third;      
    third = first = second = INT_MIN;
    for (i = 0; i < size; i ++)
    {
        if (arr[i] > first)
        {
            third = second;
            second = first;
            first = arr[i];
        }
         else if (arr[i] > second)
        {
            third = second;
            second = arr[i];
        }  
        else if (arr[i] > third)
            third = arr[i];
    }
    return make_tuple(first, second, third);
}

/* Output *//*
-> first: 328
-> second: 234
-> third: 54
*/