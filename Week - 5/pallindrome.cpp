#include <iostream>
#include <string.h>
using namespace std;

class Pallindrome{
    public:
    void integer(int n)
    {
        int n1,sum,a;
        n1=n;
        sum=0;
        do
        {
                sum=sum*10;
                a=n%10;
                sum=sum+a;
                n=n/10;
        }while(n>0);
        if(sum==n1)
                cout<<"\n it is Palindrome";
        else
                cout<<"\n it is not a palindrome";

    }
    void character(char c[])
    {
        int l=strlen(c),i,j;
        char b[l];
        for(i=0,j=l-1;i<l,j>=0;i++,j--){
            b[i]=c[j];
            cout<<b[i];
            cout<<"i="<<i<<"j="<<j<<endl;
        }
        if(strcmp(c,b)==0)
        {cout<<"\nThe entered text is palindrome";
        }
        else
        {cout<<"\n the entered text is not a palindrome";
        }
    }
};

int main(){
    char c[10];
    int k,r,v;
    Pallindrome p;
    do
    {
        cout<<"palindrome"<<endl;
        cout<<"1.for interger"<<endl;
        cout<<"2.for character"<<endl;
        cout<<"\nenter the choice\n"<<endl;
        cin>>r;
        switch(r)
        {
            case 1:
                cout<<"Enter the number";
                cin>>k;
                p.integer(k);
                break;

            case 2:
                cout<<"\nEnter the string to be checked"<<endl;
                cin>>c;
                p.character(c);
                break;
        }
        cout<<"\ndo you want to continue? (1/0)"<<endl;
        cin>>v;
    }while(v==1);
    return 0;
}