#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;
    int first = 0;
    int second = 1;
    for(int i=1;i<=n;i++){
        int nxt = first+second;
        cout << nxt << " ";
        first = second;
        second = nxt;
    }
    return 0;
}