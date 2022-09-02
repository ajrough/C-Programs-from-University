#include <iostream>
using namespace std;

int main(){
    int amt,i,arr[10]={2000,500,200,100,50,20,10,5,2,1},arr1[10];
    cout<<"Enter the Amount :";
    cin>>amt;
    for(i=0;i<10;i++){
        arr1[i]=amt/arr[i];
        amt-=arr1[i]*arr[i];
    }

    for(i=0;i<10;i++){
        cout<<arr[i]<<" = "<<arr1[i]<<endl;
    }

    return 0;
}
