#include <iostream>
#include <queue>
using namespace std;
class Student{
public:
    int rollno;
    string fullname;
};
int main()
{
	//1. Khai bao doi tuong SV
    Student obj;
    
    //2. Khai bao hang doi doi tuong sv
    queue<Student> myqueue;
    
    //3. Khoi tao doi tuong sinh vien
    obj.rollno = 100;
    obj.fullname = "Nguyen Van A";
    
    //4. Dua doi tuong vao hang doi
    myqueue.emplace(obj);

    obj.rollno = 200;
    obj.fullname = "Tran Thi B";
    myqueue.emplace(obj);

    obj.rollno = 300;
    obj.fullname = "Hoang Van C";
    myqueue.emplace(obj);
	
	//5. Duyet va hien thi danh sach sinh vien trong hang doi
    while (!myqueue.empty()) {
        cout << "- rollno: "<< myqueue.front().rollno <<endl;
        cout << "- fullname: "<< myqueue.front().fullname <<endl;
        myqueue.pop();
    }
    return 0;
}
/* Output *//*
- rollno: 100
- fullname: Nguyen Van A
- rollno: 200
- fullname: Tran Thi B
- rollno: 300
- fullname: Hoang Van C
*/
