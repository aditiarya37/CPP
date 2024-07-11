#include<iostream>
using namespace std;
class room {
    public:
    int area(int l, int b){
        return l*b;
    }
    int volume(int l, int b, int h){
        return l*b*h;
    }
};
int main(){
    int l,b,h;
    cout << "Enter the dimensions: ";
    cin >> l >> b >> h;
    room Area;
    cout << "Area: " << Area.area(l,b) << endl;
    room Vol;
    cout << "Volume: " << Vol.volume(l,b,h);
    return 0;
}