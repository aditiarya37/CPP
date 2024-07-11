#include<iostream>
using namespace std;
int linearSearch(int *arr, int n, int k, int ans=0){
    if(n==0){
        return -1;
    }
    if(arr[0]==k){
        return ans;
    }
    else{
        int remainingPart = linearSearch(arr+1,n-1,k,ans+1);
        return remainingPart;
    }
}
int main(){
    int arr[5] = {5,1,7,3,8};
    int k;
    cout << "Enter the element you want to search: ";
    cin >> k;
    cout << "Element found at index: " << linearSearch(arr,5,k);
    return 0;
}