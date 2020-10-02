#include <iostream>
using namespace std;
class Student{
    private:
    int rollno;
    string fullname;
    public:
    void setName(string full){
        fullname=full;
    }
    void setRollNo(int roll){

        rollno=roll;
    }
    string getName(){
        return fullname;
    }
    int getRollNo(){
        return rollno;
    }
    float printInfo(Student){
        cout<< this->getRollNo()<<endl;
        cout<<this->getName();
        return 0;
    }
};
int main(){
    Student s;
    Student *s1;
    s1=&s;
    s1->setName("ABC");
    s1->setRollNo(100);
    float (Student::*getInfo)(Student)=&Student::printInfo;
    (s1->*getInfo)(*s1);
}