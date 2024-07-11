#include<iostream>
using namespace std;
int main(){
    int i = 1;
    while(i<=4){
        int j = 1;
        while(j<=i-1){
            cout << " ";
            j++;
        }
        int k = 4;
        while(k>=i){
            cout << i;
            k--;
        }
        cout << endl;
        i++;
    }
    return 0;
}