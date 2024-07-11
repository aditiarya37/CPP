#include<iostream>
using namespace std;
int nFibTerm(int n){
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }
    int Nm1 = nFibTerm(n-1);
    int Nm2 = nFibTerm(n-2);
    return Nm1 + Nm2;
}
int main(){
    int n;
    cin >> n;
    cout << "Nth Fibonacci term: " << nFibTerm(n);
    return 0;
}