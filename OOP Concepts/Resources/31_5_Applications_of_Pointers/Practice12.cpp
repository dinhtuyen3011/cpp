#include <iostream>
using namespace std;
class Student{
	public:
		int rollno;
		string fullname;
		int age;
};

int main() {
	//1. Khai bao doi tuong
	Student obj;    //Bien binh thuong
	Student *objP;  //Bien con tro
	
	//2. Thiet lap dia chi cho bien con tro 
	obj.rollno = 100;
	obj.fullname = "Nguyen Van A";
	obj.age = 200;
	
	//3. Thiet lap dia chi cho bien con tro objP
	objP = &obj;
	
	//4. Hien thi thong tin cua bien doi tuong
	//a. Bien binh thuong
	cout<<"--- By Object ---"<<endl;
	cout<<"- RollNo: "<<obj.rollno<<endl;
	cout<<"- FullName: "<<obj.fullname<<endl;
	cout<<"- Age: "<<obj.age<<endl;
	
	//b. Hien thi thong tin qua bien con tro (su dung toan tu lambda)
	cout<<"--- By Pointer ---"<<endl;
	cout<<"- RollNo: "<< objP->rollno <<endl;
	cout<<"- FullName: "<< objP->fullname <<endl;
	cout<<"- Age: "<< objP->age <<endl;	
	
	return 0;
}
/* Output *//*
--- By Object ---
- RollNo: 100
- FullName: Nguyen Van A
- Age: 200
--- By Pointer ---
- RollNo: 100
- FullName: Nguyen Van A
- Age: 200
*/