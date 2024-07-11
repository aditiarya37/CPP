#include<iostream>
using namespace std;
int getPeakIndex(int *arr, int s, int e){
    if(s==e){
        return s;
    }
    int mid = s + (e-s)/2;
    if(arr[mid]<arr[mid+1]){
        return getPeakIndex(arr,mid+1,e);
    }
    else{
        return getPeakIndex(arr,s,mid);
    }
}
int main(){
    int arr[6] = {1,2,3,15,7,6};
    cout << "Peak Index: " << getPeakIndex(arr,0,5);
    return 0;
}