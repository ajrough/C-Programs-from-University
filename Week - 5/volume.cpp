#include <iostream>
#include <cmath>
using namespace std;

#define PI 3.14159

class FindVolume{
    public:
    void Volume(int side){
        cout<<"The Volume of the cube is :"<<side*side*side<<endl;
    }  
    void Volume(float radius, float height){
        cout<<"The Volume of the Cylinder is :"<<PI*pow(radius,2)*height<<endl;
    }
    void Volume(float radius){
        cout<<"The Volume of the Sphere is :"<<(PI*pow(radius,3))*(4.0/3)<<endl;
    }

};

int main(){
    FindVolume shape1;
    float a=4.0;
    shape1.Volume(5);
    shape1.Volume(a);
    shape1.Volume(10.0,25.0);
    return 0;
}