// C++ code to demonstrate copy of vector 
// by iterative method. 
#include<iostream> 
#include<vector> 
using namespace std; 
  
int main() 
{ 
    //1. Khai bao va khoi tao vector
    vector<int> vect1{1, 2, 3, 4}; 
  
    //2. Khai bao them 1 vector moi
    vector<int> vect2; 
  
    //3. Su dung vong lap de sao chep du lieu tu vector cu -> moi
    for (int i=0; i<vect1.size(); i++) 
        vect2.push_back(vect1[i]); 
  
  	//4. Hien thi phan tu trong vector cu	
    cout << "Old vector elements are : "; 
    for (int i=0; i<vect1.size(); i++) 
        cout << vect1[i] << " "; 
    cout << endl; 
  
  	//5. Hien thi phan tu trong vector moi
    cout << "New vector elements are : "; 
    for (int i=0; i<vect2.size(); i++) 
        cout << vect2[i] << " "; 
    cout<< endl; 
  
    //6. Thay doi gia tri theo chi so
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