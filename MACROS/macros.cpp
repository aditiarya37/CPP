#include<iostream>
using namespace std;
#define PI 3.14
#define Area(r) (PI*r*r)
int main(){
    int r;
    cout << "Enter the radius: ";
    cin >> r;
    cout << "Area: " << Area(r);
    return 0;
}