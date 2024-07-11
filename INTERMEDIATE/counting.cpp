#include<iostream>
using namespace std;
void printCounting(int n){
    cout << n << endl;
}
int main(){
    int n;
    cin >> n;
    for(int i=0;i<=n;i++){
        printCounting(i);
    }
    return 0;
}