#include<iostream>
using namespace std;
class Room {
    public:
    int len, brdt;
    void area(int len, int brdt);
};
inline void Room :: area(int len, int brdt){
    cout << len*brdt;
}
int main(){
    Room sol;
    sol.area(5,6);
    return 0;
}
