#include<iostream>
using namespace std;
int main(){
    int i = 1;
    while(i<=4){
        int j = 4;
        while(j>=i+1){
            cout << " ";
            j--;
        }
        int k = 1;
        while(k<=i){
            cout << i;
            k++;
        }
        cout << endl;
        i++;
    }
    return 0;
}