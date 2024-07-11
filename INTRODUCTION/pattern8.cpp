#include<iostream>
using namespace std;
int main(){
    int i = 1;
    while(i<=4){
        int j = 3;
        while(j>=i){
            cout << " ";
            j--;
        }
        int k = 1;
        while(k<=i){
            cout << "*";
            k++;
        }
        cout << endl;
        i++;
    }
    return 0;
}