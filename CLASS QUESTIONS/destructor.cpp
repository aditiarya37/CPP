#include<iostream>
using namespace std;
class area {
    public:
    int len, brdt;
    area(int len, int brdt){
        cout << "Area: " << len*brdt << endl;
    }
    ~area(){
        cout << "Destructor is called.";
    }
};
int main(){
    area sol(5,6);
    return 0;
}