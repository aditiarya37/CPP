#include<iostream>
using namespace std;
int pivotIndex(int *arr, int s, int e){
    if(s==e){
        return s;
    }
    int mid = s + (e-s)/2;
    if(arr[mid]>=arr[0]){
        return pivotIndex(arr,mid+1,e);
    }
    else{
        return pivotIndex(arr,s,mid);
    }
}
int binarySearch(int *arr, int s, int e, int k){
    if(s>e){
        return -1;
    }
    int mid = s + (e-s)/2;
    if(arr[mid]==k){
        return mid;
    }
    else if(arr[mid]<k){
        return binarySearch(arr,mid+1,e,k);
    }
    else{
        return binarySearch(arr,s,mid-1,k);
    }
}
int main(){
    int arr[6] = {4,7,8,1,2,3};
    int k;
    cout << "Enter the element to be searched: ";
    cin >> k;
    int pivot = pivotIndex(arr,0,5);
    if(k>=arr[pivot] && k<=arr[5]){
        cout << "Element found at index: " << binarySearch(arr,pivot,5,k);
    }
    else{
        cout << "Element found at index: " << binarySearch(arr,0,pivot-1,k);
    }
    return 0;
}