#include <iostream>
using namespace std;

class Circle{
    public:
    int radius;
    void Perimeter(){
        cout<<"Perimerter is "<<(2*radius*3.14)<<endl;
    }
    void Area(){
        cout<<"Area is "<<3.14*radius*radius<<endl;
    }

};

int main(){
    Circle c1;
    c1.radius=5;
    c1.Perimeter();
    c1.Area();
    return 0;
}