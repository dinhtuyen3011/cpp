#include<iostream>
using namespace std;
class Person3{
    public:
        Person3(){}
        Person3(int roll){}
};
class Me : public Person3{
    int b;
    public:
        Me(){}
        Me(int a, int b) : Person3(a){
          this->b = b;  
        }
};
class You : public Me{
    public:
        You(int a) : Me(a,10){
            
        }
};

int main(){
    You a(10);
    return 0;
}