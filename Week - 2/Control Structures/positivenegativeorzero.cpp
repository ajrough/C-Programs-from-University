//Program to find if a number is positive,negative or zero

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number :";
    cin>>n;
    if(n>0)
    cout<<"The number entered is a Positive number";
    else if(n<0)
    cout<<"The number entered is a Negative number";
    else if(n==0)
    cout<<"You have entered Zero";
    else
    cout<<"You did not enter a number :(";
    return 0;
}