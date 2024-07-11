#include<iostream>
using namespace std;
bool isSorted(int arr[], int n){
    if(n==0 || n==1){
        return 1;
    }
    if(arr[0]>arr[1]){
        return 0;
    }
    else{
        bool remainingPart = isSorted(arr+1,n-1);
        return remainingPart;
    }
}
int main(){
    int arr[5] = {2,4,1,6,8};
    cout << isSorted(arr,5);
    return 0;
}