#include<iostream>
using namespace std;
int main(){
    int rad,side,base,height;
    int ans,shape;
    while(shape!=4){
        cout << "Enter the shape: " << endl;
        cout << "1) Circle\n 2) Square\n 3) Triangle\n 4) To exit\n";
        cin >> shape;
        switch(shape){
            case 1:
            cout << "Enter the radius of the circle: ";
            cin >> rad;
            ans = 3.14*rad*rad;
            break;
            case 2:
            cout << "Enter the side of the square: ";
            cin >> side;
            ans = side*side;
            break;
            case 3:
            cout << "Enter the base and height of the triangle: ";
            cin >> base >> height;
            ans = 0.5*base*height;
            case 4:
            break;
        }
        cout << "Area: " << ans << endl;
    }
    return 0;
}