#include <iostream>
using namespace std;

struct Student{
    string name;
    string roll_no;
    int year;
    string department;
};

int main(){
    int n,i;
    cout<<"Enter the no of Students :";
    cin>>n;
    Student student[n];
    for(i=0;i<n;i++){
        cout<<"\nEnter the details of student"<<i+1<<endl;
        cout<<"Name : ";
        cin>>student[i].name;
        cout<<"Roll No : ";
        cin>>student[i].roll_no;
        cout<<"Year :";
        cin>>student[i].year;
        cout<<"Department : ";
        cin>>student[i].department;
    }

    for(i=0;i<n;i++){
        cout<<"\nName : ";
        cout<<student[i].name<<endl;
        cout<<"Roll No : ";
        cout<<student[i].roll_no<<endl;
        cout<<"Year :";
        cout<<student[i].year<<endl;
        cout<<"Department : ";
        cout<<student[i].department<<endl;
    }

    return 0;
}