#include <iostream>
using namespace std;

class Student{
	public:		
		string fullName;
		int age;
		float scrore;	

	private:
		int rollNo;		

	public:
		int getRollNo(){
			return rollNo;
		}
		void setRollNo(int rollNo){
			this->rollNo = rollNo;
		}
	
	Student(){
		rollNo = -1;
		fullName = "IMIC Technology";
		age = -1;
		scrore = 0;
	}	

	Student(int rollNo, string fullName, int age, float scrore){
		this->rollNo = rollNo;
		this->fullName = fullName;
		this->age = age;
		this->scrore = scrore;
	}
};

int main3() {
	Student obj1;
	Student obj2(100, "Nguyen Van A", 500, 8.5);
	Student obj3;
	
	obj3.setRollNo(200);
	obj3.fullName = "Tran Thi B";
	obj3.age = 400;
	obj3.scrore = 9.5;	

	cout<<"--- Object 01 ---"<<endl;
	cout<<"- RollNo: "<<obj1.getRollNo()<<endl;
	cout<<"- FullName: "<<obj1.fullName<<endl;
	cout<<"- Age: "<<obj1.age<<endl;
	cout<<"- Score: "<<obj1.scrore<<endl;
	
	cout<<"--- Object 02 ---"<<endl;
	cout<<"- RollNo: "<<obj2.getRollNo()<<endl;
	cout<<"- FullName: "<<obj2.fullName<<endl;
	cout<<"- Age: "<<obj2.age<<endl;
	cout<<"- Score: "<<obj2.scrore<<endl;
	
	cout<<"--- Object 03 ---"<<endl;
	cout<<"- RollNo: "<<obj3.getRollNo()<<endl;
	cout<<"- FullName: "<<obj3.fullName<<endl;
	cout<<"- Age: "<<obj3.age<<endl;
	cout<<"- Score: "<<obj3.scrore<<endl;
	
	return 0;
}
/* Output *//*
--- Object 01 ---
- RollNo: -1
- FullName: IMIC Technology
- Age: -1
- Score: 0
--- Object 02 ---
- RollNo: 100
- FullName: Nguyen Van A
- Age: 500
- Score: 8.5
--- Object 03 ---
- RollNo: 200
- FullName: Tran Thi B
- Age: 400
- Score: 9.5
*/