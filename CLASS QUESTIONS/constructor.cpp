#include<iostream>
using namespace std;
class vol {
    public:
    int len, brdt, hei;
    vol(){
        cout << "Length: " << len << endl << "Breadth: " << brdt << endl << "Height: " << hei << endl;
    }
    vol(int l, int b, int h){
        len = l;
        brdt = b;
        hei = h;
    }
    vol(vol &sol){
        len = sol.len;
        brdt = sol.brdt;
        hei = sol.hei;
    }
    void display(){
        cout << "Volume: " << len*brdt*hei << endl;
    }
};
int main(){
    vol sol1(5,6,7);
    vol sol2 = sol1;
    sol1.display();
    sol2.display();
    return 0;
}