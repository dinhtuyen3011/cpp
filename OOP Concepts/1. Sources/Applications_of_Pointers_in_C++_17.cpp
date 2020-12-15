#include <iostream>
using namespace std;

//Abstract class
class Shape {
	public:
		virtual float Area()=0;
		virtual float Perimetter()=0;
};

class Triangle : public Shape{
	public:
		float Area(){
			return 100;
		}
		float Perimetter(){
			return 200;
		}
};

class Rectange : public Shape{
	public:
		float Area(){
			return 300;
		}
		float Perimetter(){
			return 400;
		}
};

int main() {
	//1. Khai bao va khoi tao doi tuong
	Triangle objt;
	Rectange objr;

	//2. Hien thi thong tin Dien tich & Chu vi
	cout<<"1. Triangle: "<<endl;
	cout<<"- Area: "<< objt.Area() <<endl;
	cout<<"- Perimetter: "<< objt.Perimetter() <<endl;

	cout<<"2. Rectange: "<<endl;
	cout<<"- Area: "<< objr.Area() <<endl;
	cout<<"- Perimetter: "<< objr.Perimetter() <<endl;

	//3. Khai bao bien con tro
	Triangle *objp;

	//4. Thiet lap bien con tro tham chieu toi dia chi cua objt
	objp = &objt;

	//5. Hien thi thong tin
	cout<<"- Triangle by Pointer - "<<endl;
	cout<<"- Area: "<< objp->Area() <<endl;
	cout<<"- Perimetter: "<< objp->Perimetter() <<endl;

	return 0;
}
/* Output */
1. Triangle:
- Area: 100
- Perimetter: 200
2. Rectange:
- Area: 300
- Perimetter: 400
- Triangle by Pointer -
- Area: 100
- Perimetter: 200

