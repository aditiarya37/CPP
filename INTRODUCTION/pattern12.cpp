#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i = 1;
    while(i<=n){
        int j = n-1;
        while(j>=i){
            cout << " ";
            j--;
        }
        int k = 1;
        while(k<=i){
            cout << k;
            k++;
        }
        int l = 1;
        while(l<=i-1){
            cout << i-l;
            l++;
        }
        cout << endl;
        i++;
    }
    return 0;
}