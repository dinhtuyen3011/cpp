#include <iostream>
using namespace std;
class student{
	public:
		int rollno;
		string fullname;
		int age;
		int getNumber(){ return 200; }
        float PrintInfo(float a){return a;}		
};

int main() {
	//1. Khai bao bien doi tuong
	student obj;
	student *objP;
	
	//2. Thiet lap dia chi cho bien con tro P
	objP = &obj;
	
	//3. Thiet lap thog tin qua con tro
	objP->rollno = 100;
	objP->fullname = "Nguyen Van A";
	objP->age = 300;
	
	//4. Hien thi thong tin qua con tro
	cout<<"- RollNo: "<< objP->rollno <<endl;
	cout<<"- FullName: "<< objP->fullname <<endl;
	cout<<"- Age: "<< objP->age <<endl;
	
	//5. Khai bao con tro tham chieu data member & member function
	int student::*ptrRoll = &student::rollno;         // pointer to data member 'rollno'
	//return_type (class_name::*ptr_name) (argument_type) = &class_name::function_name;
	int (student::*ptrGet)() = &student::getNumber;   // pointer to member function 'getNumber()'
	float (student::*ptrInfo)(float) = &student::PrintInfo;   // pointer to member function 'getNumber()'

	//6. Thiet lap qua con tro da gan
	objP->*ptrRoll = 500;      
	cout<<"- RollNo: "<< objP->*ptrRoll <<endl;	
	cout<<"- Get Number: "<< (objP->*ptrGet)() <<endl;
    cout<<"- Get Print Info: "<< (objP->*ptrInfo)(8.5) <<endl;
	
	return 0;
}
/* Output *//*
- RollNo: 100
- FullName: Nguyen Van A
- Age: 300
- RollNo: 500
- Get Number: 200
- Get Print Info: 8.5
*/
