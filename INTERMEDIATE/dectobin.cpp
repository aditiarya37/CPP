#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout << "Decimal: ";
    cin >> n;
    int digit, bin = 0, i = 0; 
    while(n!=0){
        digit = n&1;
        bin += (digit * pow(10,i));
        n = n >> 1;
        i++;
    }
    cout << "Binary: " << bin;
    return 0;
}