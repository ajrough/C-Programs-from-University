#include <iostream>
using namespace std;

int main(){
    int a,b,sum;
    cout<<"Input 2 Number:";
    cin>>a>>b;
    sum=a+b;
    if(sum>=105 && sum<=200)
    sum=200;
    cout<<sum;    
    return 0;
}