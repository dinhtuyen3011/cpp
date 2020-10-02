#include <iostream>
using namespace std;
int global_value=10;
void change_pointer_value(int ** ptr_ptr){
    cout<<"ptr before"<<&ptr_ptr<<endl;
    *ptr_ptr=&global_value;
    cout<<"ptr after: "<<*ptr_ptr<<endl;
    cout<<"global var: "<<*ptr_ptr<<endl;
}
int main(){
    int local_value=9;
    int *ptr=&local_value;
    cout<< "var: "<< &local_value<<endl;
    cout<<"pointer to var: "<<ptr<<endl;
    cout<<"passing a pointer to function"<<endl;
    cout<<"value before: "<<*ptr<<endl;
    cout<<"address: pointer to var01: "<<ptr<<endl;
    change_pointer_value(&ptr);
    
    cout<<"value after: "<<*ptr<<endl;
    cout<<"value of ptr after: "<<ptr;
}