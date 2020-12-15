// the C++ nested class object, object in object
#include <iostream>
using namespace std;
// first class declaration
class mail_info {
    // private by default
    int shipper;
    int postage;
public:
    void set(int input_class, int input_postage){
        shipper = input_class;
        postage = input_postage;
    }
    int get_postage(void){return postage;}
};

// second class declaration
class box {
    int length;
    int width;
    mail_info label;
public:
    void set(int l,int w, int ship, int post)
    {
        length = l;
        width = w;
        // accessing the first class, mail_info set() method
        label.set(ship, post);
    }
    int get_area(void) {return (length * width);}
};
// main program
int main(void)
{
    // instantiate objects of type box
    box small, medium, large;
    // provide the constructor values
    small.set(2,4,1,35);
    medium.set(5,6,2,72);
    large.set(8,10,4,98);

    // print the values
    cout<<"Area of small box\'s label is "<<small.get_area()<<endl;
    cout<<"Area of medium box\'s label is "<<medium.get_area()<<endl;
    cout<<"Area of large box\'s label is "<<large.get_area()<<endl;
    return 0;
}
/* Output *//*
Area of small box's label is 8
Area of medium box's label is 30
Area of large box's label is 80
*/

