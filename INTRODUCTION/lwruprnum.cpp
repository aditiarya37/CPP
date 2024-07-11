#include<iostream>
using namespace std;
int main(){
    char ch;
    cin >> ch;
    if(ch>='97' && ch<=122){
        cout << "Lowercase";
    }
    if(ch>=65 && ch<=90){
        cout << "Uppercase";
    }
    if(ch>=48 && ch<=57){
        cout << "Numeric";
    }
}