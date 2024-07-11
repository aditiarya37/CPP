#include<iostream>
using namespace std;
int main(){
    int i = 1;
    while(i<=4){
        int j = 0;
        while(j<i){
            cout << i-j;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}