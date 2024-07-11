#include<iostream>
#define m 1000000007
using namespace std;
int main(){
    int fact = 1;
    int n;
    cout << "Enter the number: ";
    cin >> n;
    for(int i=n;i>=1;i--){
        fact = (fact)%m * i;
    }
    cout << fact;
    return 0;
}