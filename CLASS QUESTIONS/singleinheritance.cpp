#include<iostream>
using namespace std;
class Base {
    public:
    int areaT, areaR;
    void triangleArea(int b, int h){
        areaT = (0.5*b*h);
    }
    void rectangleArea(int len, int brdt){
        areaR = len*brdt;
    }
};
class Derived : public Base {
    public:
    void display(){
        cout << "Area of the triangle: " << areaT << endl;
        cout << "Area of the rectangle: " << areaR << endl;
    }
};
int main(){
    Derived obj;
    obj.triangleArea(5,7);
    obj.rectangleArea(4,8);
    obj.display();
    return 0;
}