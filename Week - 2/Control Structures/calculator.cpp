#include <iostream>
using namespace std;

int main(){
    int a,b,choice;
    cout<<"-----Calculator-----"<<endl;
    cout<<"1.Add"<<endl;
    cout<<"2.Subtract"<<endl;
    cout<<"3.Multiply"<<endl;
    cout<<"4.Divide"<<endl;
    cout<<"Input your Choice :";
    cin>>choice;
    switch(choice){
        case 1:{
            cout<<"Enter First number :" ;
            cin>>a;
            cout<<"Enter Second number :";
            cin>>b;
            cout<<"The Sum is "<<a+b;
            break;
        }
        case 2:{
            cout<<"Enter First number :";
            cin>>a;
            cout<<"Enter Second number :";
            cin>>b;
            cout<<"The Difference is "<<a-b;
            break;
        }
        case 3:{
            cout<<"Enter First number :";
            cin>>a;
            cout<<"Enter Second number :";
            cin>>b;
            cout<<"The Product is "<<a*b;
            break;
        }
        case 4:{
            cout<<"Enter First number :";
            cin>>a;
            cout<<"Enter Second number :";
            cin>>b;
            cout<<"The Dividend is "<<a/b;
            break;
        }
    }
    return 0;
}