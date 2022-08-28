#include <iostream>
using namespace std;

int main(){
    int i,j;
    for(i=1;i<=10;i++){
        if(i>5){
            for(j=(10-i);j>0;j--){
                cout<<"* ";
            }            
        }
        else{
            for(j=0;j<i;j++){
              cout<<"* ";
            }
        }
        cout<<endl;
    }
    return 0;
}