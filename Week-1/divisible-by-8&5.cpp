#include <iostream>
using namespace std;

//Program to find the number divisible by 8 and 5 between 1000 and 2000
int main(){
    int i;
    for(i=1000;i<=2000;i++){
        if(i%5==0 && i%8==0)
        cout<<i<<endl;
    }
    return 0;
}