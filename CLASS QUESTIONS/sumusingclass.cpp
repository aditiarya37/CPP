#include<iostream>
using namespace std;
class sum {
    public:
    int s(int a, int b){
        return a+b;
    }
};
int main(){
    int a,b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    sum ans;
    cout << "Sum: " << ans.s(a,b);
    return 0;
}