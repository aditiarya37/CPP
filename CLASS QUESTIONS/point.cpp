#include<iostream>
#include<cmath>
using namespace std;
class POINT{
    int x,y;
    public:
    POINT(int x1, int y1){
        x = x1;
        y = y1;
    }
    float ans = 0;
    void calDis(POINT p1, POINT p2){
        float base = pow((p2.x-p1.x),2) + pow((p2.y-p1.y),2);
        ans = pow(base,0.5);
    }
    void display(){
        cout << "Distance: " << ans;
    }
};
int main(){
    int x1,x2,y1,y2;
    cout << "Enter coordinates of p1: ";
    cin >> x1 >> y1;
    POINT p1(x1,y1);
    cout << "Enter coordinates of p2: ";
    cin >> x2 >> y2;
    POINT p2(x2,y2);
    p2.calDis(p1,p2);
    p2.display();
    return 0;
}