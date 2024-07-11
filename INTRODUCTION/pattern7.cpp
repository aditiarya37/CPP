#include<iostream>
using namespace std;
int main(){
    int i = 4;
    while(i>=1){
        int j = 4;
        while(j>=i){
            char ch = 'D' + i - j;
            cout << ch;
            j--;
        }
        cout << endl;
        i--;
    }
    return 0;
}