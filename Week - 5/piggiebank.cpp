#include <iostream>
using namespace std;

class AddAmount{
    private:
    int amount=50;
    public:
    AddAmount(){
        amount+=0;
    }
    AddAmount(int amount){
        this->amount+=amount;
    }
    void Print(){
        cout<<"The Amount in Piggie Bank is :"<<amount;
    }
};

int main(){
    AddAmount s1(30);
    s1.Print();
    return 0;
}