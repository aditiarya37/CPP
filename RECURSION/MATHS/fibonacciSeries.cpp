#include<iostream>
using namespace std;
int fibonacciNthTerm(int n){
    if(n==0 || n==1){
        return n;
    }
    int fibN1 = fibonacciNthTerm(n-1);
    int fibN2 = fibonacciNthTerm(n-2);
    return fibN1+fibN2; 
}
int main(){
    int n;
    cout << "Enter the term: ";
    cin >> n;
    cout << fibonacciNthTerm(n);
    return 0;
}