#include<iostream>
using namespace std;
int nCr(int n, int r);
int factorial(int num);
int main(){
    int n,r;
    cin >> n >> r;
    cout << "Answer: " << nCr(n,r);
    return 0;
}
int nCr(int n, int r){
    return (factorial(n))/((factorial(r))*(factorial(n-r)));
}
int factorial(int num){
    int fact = 1;
    for(int i=1;i<=num;i++){
        fact = fact * i;
    }
    return fact;
}