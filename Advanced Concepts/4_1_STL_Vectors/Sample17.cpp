/* Method 3 : By passing vector as constructor. At the time of declaration of vector, 
passing an old initialized vector, copies the elements of passed vector into the newly declared vector. 
They are deeply copied.*/
// C++ code to demonstrate copy of vector 
// by constructor method. 
#include<bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std; 
  
int main() 
{ 
    //1. Khai bao va khoi tao vector 01
    vector<int> vect1{1, 2, 3, 4}; 
  
    //2. Declaring new vector and copying 
    // element of old vector 
    // constructor method, Deep copy 
    vector<int> vect2(vect1); 
  
  	//3. Hien thi
    cout << "Old vector elements are : "; 
    for (int i=0; i<vect1.size(); i++) 
        cout << vect1[i] << " "; 
    cout << endl; 
  
    cout << "New vector elements are : "; 
    for (int i=0; i<vect2.size(); i++) 
        cout << vect2[i] << " "; 
    cout<< endl; 
  
    // Changing value of vector to show that a new 
    // copy is created. 
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
The first element of old vector is :2
The first element of new vector is :1
*/