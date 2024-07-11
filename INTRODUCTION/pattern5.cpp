#include<iostream>
using namespace std;
int main(){
    // First Method
    int i = 1;
    while(i<=3){
        int j = 1;
        while(j<=3){
            char ch = 'A' + i + j - 2;
            cout << ch;
            j++;
        }
        cout << endl;
        i++;
    }
    //Second Method
    int row = 1;
    while(row<=3){
        int col = 1;
        char st = 'A' + row - 1;
        while(col<=3){
            cout << st;
            st++;
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}