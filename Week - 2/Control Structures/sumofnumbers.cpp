#include <iostream>
using namespace std;

int main(){
    int sum=0;
    while (true){
        int count=1,num;
        cout<<"Enter Number "<<count<<":";
        cin>>num;
        if(num<0){
            cout<<"Terminated"<<endl;
            cout<<"Sum is "<<sum<<endl;
            break;
        }
        else
        sum+=num;
        count++;
    }
    return 0;
}