#include<iostream>
using namespace std;
int binarySearch(int arr[], int n, int ele){
    int low = 0;
    int high = n-1;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(ele>arr[mid]){
            low = mid+1;
        }
        else if(ele<arr[mid]){
            high = mid-1;
        }
        else{
            return mid;
        }
    }
    return -1;
}
int main(){
    int arr[10];
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter the elements: ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int ele;
    cout << "Enter the element to be searched in the array: ";
    cin >> ele;
    cout << "Element found at index: " << binarySearch(arr,n,ele);
    return 0;
}