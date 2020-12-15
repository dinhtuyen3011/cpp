/* Method 2 : By assignment “=” operator.
Simply assigning the new vector to old one copies the vector. 
This way of assignment is not possible in case of arrays.*/
// C++ code to demonstrate copy of vector 
// by iterative method. 
#include<iostream> 
#include<vector> 
using namespace std; 
  
int main() 
{ 
    //1. Khai bao va khoi tao vector 01
    vector<int> vect1{1, 2, 3, 4}; 
  
    //2. Khai bao vector 02
    vector<int> vect2; 
  
    //3. Su dung toan tu gan de sao chep du lieu 
    vect2 = vect1; 
  
  	//4. Hien thi phan tu trong vector 01
    cout << "Old vector elements are : "; 
    for (int i=0; i<vect1.size(); i++) 
        cout << vect1[i] << " "; 
    cout << endl; 
  
  	//5. Hien thi phan tu trong vector 02
    cout << "New vector elements are : "; 
    for (int i=0; i<vect2.size(); i++) 
        cout << vect2[i] << " "; 
    cout<< endl; 
  
    //6. Thay doi gia tri o vector 01 
    vect1[0] = 2; 
  	
    cout << "The first element of old vector is :"; 
    cout << vect1[0] << endl; 
    cout << "The first element of new vector is :"; 
    cout << vect2[0] <<endl; 
  
    return 0; 
} 
/* Output *//*
Old vector elements are : 1 2 3 4 
New vector elements are : 1 2 3 4 
The first element of old vector is : 2
The first element of new vector is : 1
*/