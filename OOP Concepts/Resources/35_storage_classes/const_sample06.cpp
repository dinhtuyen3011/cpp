#include <iostream> 
using namespace std;

class Person
{
    int i;
    mutable int j;
    public:
    Person(){
        i = 0; 
        j = 0;
    }
    
    void printInfo() const
    { 
        i++;    // will give error
        j++;    // works, because j is mutable
    }
};

int main()
{
    const Person obj;
    obj.printInfo();
}