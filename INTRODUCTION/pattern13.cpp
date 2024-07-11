#include<iostream>
using namespace std;
int main(){
    int i = 5;
    while(i>=1){
        int j = 1;
        while(j<=i){
            cout << j;
            j++;
        }
        int k = 5;
        while(k>=i+1){
            cout << "*";
            k--;
        }
        int l = 5;
        while(l>=i+1){
            cout << "*";
            l--;
        }
        int m = 1;
        while(m<=i){
            cout << i-m+1;
            m++;
        }
        cout << endl;
        i--;
    }
    return 0;
}