#include <iostream>
using namespace std;

class CalcArea{
    public:
    void Area(int length, int breath){
        int area = length*breath;
        cout<<"The area of the Rectangle is :"<<area<<endl;
    }
    void Area(int side){
        int area = side*side;
        cout<<"The area of the Square is :"<<area<<endl;
    }
};

int main(){
    CalcArea shape1, shape2;
    shape1.Area(3,7);
    shape2.Area(5);
    return 0;
}