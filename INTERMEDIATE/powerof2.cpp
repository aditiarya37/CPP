#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int count = 0;
    while(n!=0){
        if(n&1){
            count++;
        }
        n = n>>1;
    }
    if(count==1){
        cout << "Yes, the number is power of 2.";
    }
    else{
        cout << "No, the number is not power of 2.";
    }
    return 0;
}