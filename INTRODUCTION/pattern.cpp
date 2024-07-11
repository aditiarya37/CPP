#include<iostream>
using namespace std;
int main(){
    int i = 0;
    while(i<4){
        int j = 1;
        while(j<=i+1){
            cout << i+j;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}