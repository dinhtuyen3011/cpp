#include <iostream>
using namespace std;
class Person
{
private:
    int rollno;
    string fullName;
public:
    Person(/* args */);
    ~Person();
    float score;
    void setter_rollno(int roll){
        rollno=roll;
    }
    void setter_fullname(string name){
        fullName=name;
    }
    string getName(){
        return fullName;
    }
    int getRoll(){
        return rollno;
    }
    void getInfo(){
        
        
    }
};

Person::Person(/* args */)
{
}

Person::~Person()
{
}
int main(){
    Person a;
    Person *p;
    p=&a;
    int roll;
    string name;
    cout<<"->rollno = ";
    cin>>roll;
    cout<<"->fullname = ";
    cin>>name;
    p->setter_rollno(roll);
    p->setter_fullname(name);
    cout<<"RollNo: "<<p->getRoll()<<endl;
    cout<<"FullName: "<<p->getName()<<endl;

}