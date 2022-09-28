#include <iostream>
#include <cmath>
using namespace std;

class Triangle{
    int s1,s2,s3;
    int peri = s1+s2+s3;
    float semi = (peri/2);
    float area = sqrt(semi*(semi-s1)*(semi-s2)*(semi-s3));
    public:
    Triangle(int s1,int s2, int s3){
        this -> s1 = s1;
        this -> s2 = s2;
        this -> s3 = s3;
    }
    void printArea(){
        cout<<"The area is "<<sqrt((peri/2)*((peri/2)-s1)*((peri/2)-s2)*((peri/2)-s3))<<endl;
    }
    void printPerimeter(){
        cout<<"The Perimeter is "<<s1+s2+s3<<endl;
    }

};

int main(){
    Triangle t1 = Triangle(3,4,5);
    t1.printArea();
    t1.printPerimeter();
    return 0;
}