// Write a program to checks whether a year (integer) entered by the user is a leap year or not. Using if...else Ladder

#include <iostream>
using namespace std;

int main(){
    int year;
    cout<<"Enter the year:";
    cin>>year;
    if(year%4==0)
    cout<<"It is a Leap year";
    else
    cout<<"It is not a Leap year";
    return 0;
}