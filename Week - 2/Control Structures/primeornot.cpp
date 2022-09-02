#include <iostream>
using namespace std;

int main(){
    int num=0,i,j;
    for(i=100;i<=200;i++){
        for(j=1;j<=i;j++){
            if(i%j==0){
                num+=1;
            }
        }
        if(num<3){
            cout<<i;
            num=0;
        }
    }
    return 0;
}