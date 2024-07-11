#include<iostream>
#include<stack>
using namespace std;
/* Stack Operations:
    1) push
    2) pop
    3) top
    4) isFull
    5) isEmpty
    6) size
    7) peek
*/
int main(){
    stack<string> abc;
    abc.push("Aditi");
    abc.push("Siddhi");
    abc.push("Arya");
    while(!abc.empty()){
        cout << abc.top() << endl;
        abc.pop();
    }
    return 0;
}