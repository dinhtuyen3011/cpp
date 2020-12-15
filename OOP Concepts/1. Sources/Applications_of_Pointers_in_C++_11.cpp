#include <iostream>
using namespace std;
class Student{
	public:
		int rollNo = 100;
};

int main() {
	//1. Khai bao doi tuong
	//*objb : La bien con tro
	Student obja, *objb;
	
	//2. Thiet lap dia chi cho bien con tro 
	objb = &obja;
	
	//3. Hien thi thong tin
	cout<<"- rollNo: "<< obja.rollNo <<endl;
	cout<<"- rollNo: "<< objb->rollNo <<endl;
	
	return 0;
}

