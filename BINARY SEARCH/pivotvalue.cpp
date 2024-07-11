#include<iostream>
using namespace std;
int pivot(int arr[], int n){
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
int main(){
    int arr[5] = {6,7,3,4,5};
    cout << "Pivot Index: " << pivot(arr,5);
    return 0;
}