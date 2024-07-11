#include<iostream>
using namespace std;
int binarySearch(int *arr, int s, int e, int k){
    if(s>e){
        return -1;
    }
    int mid = s+(e-s)/2;
    if(arr[mid]==k){
        return mid;
    }
    if(arr[mid]<k){
        return binarySearch(arr,mid+1,e,k);
    }
    else{
        return binarySearch(arr,s,mid-1,k);
    }
}
int main(){
    int size;
    cout << "Enter size: ";
    cin >> size;
    int *arr = new int[size];
    cout << "Enter the elements: " << endl;
    for(int i=0;i<size;i++){
        cin >> arr[i];
    }
    int k;
    cout << "Enter the element to be searched: ";
    cin >> k;
    cout << "Element found at: " << binarySearch(arr,0,size-1,k);
    return 0;
}