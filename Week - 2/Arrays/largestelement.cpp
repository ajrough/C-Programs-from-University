#include <iostream>
using namespace std;

int main(){
    int size,greatestno,i;
    cout<<"Enter the Size of the Array :";
    cin>>size;
    int arr[size];
    for(i=0;i<size;i++){
        cout<<"Enter the number :";
        cin>>arr[i];
    }

    greatestno=arr[0];

    for(i=0;i<size;i++){
        if(greatestno < arr[i]){
            greatestno=arr[i];
        }
    }

    cout<<"The Greatest Number is "<<greatestno;
    return 0;
}