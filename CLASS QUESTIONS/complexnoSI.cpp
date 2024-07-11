#include<iostream>
using namespace std;
class Base {
    public:
    int real, img;
    void takingInput(){
        cout << "Enter the complex number: ";
        cin >> real >> img;
    }
};
class Derived : public Base {
    public:
    void printingOutput(){
        cout << "Real Part: " << real << endl;
        cout << "Imaginary Part: " << img << endl;
    }
};
int main(){
    Derived obj;
    obj.takingInput();
    obj.printingOutput();
    return 0;
}