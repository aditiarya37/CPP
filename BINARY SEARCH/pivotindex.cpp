#include<iostream>
using namespace std;
int main(){
    int arr[7] = {3,0,5,6,5,1,2};
    int sum = 0;
    for(int i=0;i<7;i++){
        sum += arr[i];
    }
    int suml = 0, sumr, ans = -1;
    for(int i=0;i<7;i++){
        sumr = sum - arr[i] - suml;
        if(suml == sumr){
            ans = i;
            break;
        }
        suml += arr[i];
    }
    cout << ans;
}