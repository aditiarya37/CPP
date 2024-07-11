#include<iostream>
using namespace std;
int a,b,c;
class add {
    public:
    void input(){
        cin >> a >> b;
    }
};
class add1 {
    public:
    void sum(){
        c = a+b;
    }
};
class add2: public add, public add1 {
    public:
    void display(){
        cout << "Sum: " << c;
    }
};
int main(){
    add2 sol;
    sol.input();
    sol.sum();
    sol.display();
}