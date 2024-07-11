#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> nums;
    nums.push(1);
    nums.push(2);
    nums.push(3);
    nums.push(4);
    nums.push(5);
    nums.push(6);
    while(!nums.empty()){
        cout << nums.top() << endl;
        nums.pop();
    }
    return 0;
}