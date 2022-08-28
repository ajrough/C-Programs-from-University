#include <iostream>
using namespace std;

void maxNumber(int a, int b, int c){
    if(a>b && a>c)
    cout<<a<<" is greater";
    else if(b>a && b>c)
    cout<<b<<" is greater";
    else
    cout<<c<<" is greater";
}

int main(){
    int a,b,c;
    cout<<"Input 3 numbers:";
    cin>>a>>b>>c;
    maxNumber(a,b,c);
    return 0;
}