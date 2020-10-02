#include <iostream>
using namespace std;
class weapon{
    public:
    weapon(){cout<<"Loading weapon features"<<endl;}
    virtual void loadFeature()=0;
};
class Bomb:public weapon{
    public:
    void loadFeature(){
        cout<<"Loading bomb features."<<endl;
    }
};
class Gun:public weapon{
    public:
    void loadFeature(){
        cout<<"Loading gun features."<<endl;
    }};
int main(){
        
        Bomb b;
        weapon *a;
        a=&b;
        a->loadFeature();
        Gun c;
        a=&c;
        a->loadFeature();
        delete a;
        
}
