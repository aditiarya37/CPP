#include<iostream>
#include<vector>
using namespace std;
int pivotIndex(vector<int>& arr, int n){
    int low = 0;
    int high = n-1;
    while(low<high){
        int mid = low + (high-low)/2;
        if(arr[mid]>=arr[0]){
            low = mid+1;
        }
        else{
            high = mid;
        }
    }
    return low;
}
int binarySearch(vector<int>& arr, int start, int end, int key){
    while(start<=end){
        int mid = start + (end-start)/2;
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid]>key){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    return -1;
}
int main(){
    vector<int> arr{6,7,3,4,5};
    int k;
    cout << "Key: ";
    cin >> k;
    int pivot = pivotIndex(arr,5);
    if(k>=arr[pivot] && k<=arr[4]){
        cout << "Answer : " << binarySearch(arr,pivot,4,k);
    }
    else{
        cout << "Answer : " << binarySearch(arr,0,pivot-1,k);
    }
}
