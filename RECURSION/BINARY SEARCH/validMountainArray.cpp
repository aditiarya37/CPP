#include<iostream>
using namespace std;
int peakIndex(int *arr, int s, int e){
    if(s==e){
        return s;
    }
    int mid = s + (e-s)/2;
    if(arr[mid]<arr[mid+1]){
        return peakIndex(arr,mid+1,e);
    }
    else{
        return peakIndex(arr,s,mid);
    }
}
int main(){
    int arr[7] = {1,4,6,8,23,9,3};
    cout << "Peak Index: " << peakIndex(arr,0,6);
    return 0;
}