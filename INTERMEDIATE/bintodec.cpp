#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout << "Binary: ";
    cin >> n;
    int digit,dec=0,i=0;
    while(n!=0){
        digit = n%10;
        if(digit==1){
            dec += pow(2,i);
        }
        n /= 10;
        i++;
    }
    cout << "Decimal: " << dec; 
    return 0;
}