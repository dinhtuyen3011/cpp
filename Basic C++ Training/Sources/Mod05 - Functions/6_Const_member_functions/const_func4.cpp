#include <iostream> 
using namespace std;
class Test
{    
    int rollNo;
    string fullName;
    public:
        Test(int rollNo, string fullName){
            this->rollNo = rollNo;
            this->fullName = fullName;
        }
        int getRollNo(){
            return rollNo;    
        }
        void setRollNo(int rollNo){
            this->rollNo = rollNo;
        }
};

int main()
{
    const Test obj(100, "Nguyễn Văn A");
    obj.setRollNo(200); //error
    return 0;
}