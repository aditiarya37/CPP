#include<iostream>
using namespace std;
int bits(int n){
    int count = 0;
    while(n!=0){
        if(n&1){
            count++;
        }
        n = n>>1;
    }
    return count;
}
int calBits(int a, int b){
    return bits(a) + bits(b);
}
int main(){
    int a,b;
    cin >> a >> b;
    cout << "Set bits : " << calBits(a,b);
    return 0;
}