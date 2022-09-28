#include <iostream>
using namespace std;

class Student{
    public:
    string name;
    int roll_no;
    void checkifitworks(){
        cout<<"Name    : "<<name<<endl;
        cout<<"Roll No : "<<roll_no<<endl;
    }
};

int main(){
    Student s1;
    s1.roll_no=2;
    s1.name="Ajay";
    s1.checkifitworks();
    return 0;
}