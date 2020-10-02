#include <iostream>
using namespace std;
class Employee
{
private:
    string lastName;
    string firstName;
public:
    Employee(const string first,const string last): firstName(first),lastName(last){};
    ~Employee(){cout<<"Employee destructed"<<endl;};
    string  getFirstName() const;
    string getLastName() const;
    virtual double earnings() const=0;
    
};

string Employee:: getLastName() const{
    return lastName;
};
    
string Employee:: getFirstName() const{
    return firstName;
};
class Manage:public Employee{

    public:
    Manage(string first, string last, double sal): Employee( first, last),salary(sal){}
    ~Manage(){cout<<"Manager destructed"<<endl;}
    double earnings()const{
        return salary;
    }
   
    private:
    double salary;
};
int main(){
    Manage a("Nguyen","Tuyen",20000);
    cout<<a.getFirstName()<<" "<<a.getLastName()<<endl;
    cout<<a.earnings()<<endl;
}

