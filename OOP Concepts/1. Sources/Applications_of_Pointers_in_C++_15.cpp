#include <iostream>
using namespace std;
class Student {
	//public Data Member
	public:		
		string fullName;
		int age;
		float scrore;
	
	//Private Data Member
	private:
		int rollNo;
		
	//Public getter and setter
	public:
		int getRollNo(){
			return rollNo;
		}
		void setRollNo(int rollNo){
			this->rollNo = rollNo;
		}
};
int main() {
	//1. Khai bao bien doi tuong
	Student obja, *objb;
	
	//2. Thiet lap bien con tro dai dien cho doi tuong
	objb = &obja;
	
	//3. Thiet lap thong tin cho bien doi tuong obja
	obja.setRollNo(200);
	obja.fullName = "Nguyen Van A";
	obja.age = 500;
	obja.scrore = 8.5;
	
	//4. Hien thi thong tin cua doi tuong obja
	cout<<"--- obja ---"<<endl;
	cout<<"- rollNo: "<< obja.getRollNo()<<endl;
	cout<<"- fullName: "<< obja.fullName<<endl;
	cout<<"- Age: "<< obja.age<<endl;
	cout<<"- Score: "<< obja.scrore<<endl;
	
	//5. Hien thi thong tin cua doi tuong objb
	cout<<"--- objb ---"<<endl;
	cout<<"- rollNo: "<< objb->getRollNo()<<endl;
	cout<<"- fullName: "<< objb->fullName<<endl;
	cout<<"- Age: "<< objb->age<<endl;
	cout<<"- Score: "<< objb->scrore<<endl;
	
	return 0;
}
/* Output */
--- obja ---
- rollNo: 200
- fullName: Nguyen Van A
- Age: 500
- Score: 8.5
--- objb ---
- rollNo: 200
- fullName: Nguyen Van A
- Age: 500
- Score: 8.5
