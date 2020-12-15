#include <iostream>
#include<string>
#include<vector>
using namespace std;

class Student{
	private:
		int rollNo;
        string fullName;

	public:
		int getRollNo(){
			return rollNo;
		}
		void setRollNo(int rollNo){
			this->rollNo = rollNo;
		}
		string getFullName(){
			return fullName;
		}
		void setFullName(string fullName){
			this->fullName = fullName;
		}

	Student(){
		rollNo = -1;
		fullName = "IMIC Technology";
	}

	Student(int rollNo, string fullName){
		this->rollNo = rollNo;
		this->fullName = fullName;
	}
};

int main() {
	int rn;
	string fname;
	cout<<"- RollNo?"; cin>>rn;getchar();
	cout<<"- FullName: "; getline(cin,fname);

	Student obj(rn, fname);
	vector<Student> v;

    v.push_back(obj);
    cout <<"Initial size: "<< v.size()<<endl;

    Student getObj = v.at(0);
    cout<<"-> rollNo: "<<getObj.getRollNo()<<endl;
    cout<<"-> fullName: "<<getObj.getFullName()<<endl;

	v.at(0).setRollNo(300);
	v.at(0).setFullName("ABC");
	cout<<"-> rollNo: "<<getObj.getRollNo()<<endl;
    cout<<"-> fullName: "<<getObj.getFullName()<<endl;
    
	return 0;
}
