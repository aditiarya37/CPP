#include<iostream>
using namespace std;
int main(){
    int i = 1;
    char ch;
    while(i<=4){
        int j = 1;
        while(j<=i){
            ch = 'A' + i + j - 2;
            cout << ch;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}