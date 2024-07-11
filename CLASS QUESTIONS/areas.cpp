#include<iostream>
using namespace std;
class areas {
    public:
    void area(){
        int choice;
        cout << "Choose from the following:\n1) Circle\n2) Rectangle\n3) Triangle\n";
        cin >> choice;
        switch(choice){
            case 1:
            int r;
            cout << "Enter the radius of the circle: ";
            cin >> r;
            cout << "Area: " << (3.14*r*r);
            break;
            case 2:
            int l,b;
            cout << "Enter the length and breath of the rectange: ";
            cin >> l >> b;
            cout << "Area: " << l*b;
            break;
            case 3:
            int base,h;
            cout << "Enter the base and height of the triangle: ";
            cin >> base >> h;
            cout << "Area: " << (0.5*base*h);
        }
    }
};
int main(){
    areas ans;
    ans.area();
    return 0;
}