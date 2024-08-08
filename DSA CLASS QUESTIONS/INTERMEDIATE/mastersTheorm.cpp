#include<iostream>
#include<cmath>
using namespace std;
string solve(int a, int b, int c, int n){
    double log_b_a = log(a)/log(b);
    double n_log_b_a = pow(n,log_b_a);
    double f_n = pow(n,c);
    if(f_n < n_log_b_a){
        cout << "O(n^" + to_string(log_b_a) + ")";
    }
    else if(f_n > n_log_b_a){
        cout << "O(n^" + to_string(c) + ")";
    }
    else{
        cout << "O(n^" + to_string(log_b_a) + "log n)";
    }
}
int main(){
    int a,b,c,n;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;
    if(a<1 || b<=1){
        cout << "Master's theorm not valid.";
    }
    else{
        solve(a,b,c,n);
    }
    return 0;
}