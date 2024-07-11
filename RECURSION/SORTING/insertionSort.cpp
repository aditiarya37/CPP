#include<iostream>
using namespace std;
void insertionSort(int *arr, int n){
    if(n<=1){
        return;
    }
    insertionSort(arr,n-1);
    int temp = arr[n-1];
    int j=n-2;
    while(j>=0 && arr[j]>temp){
        arr[j+1] = arr[j];
        j--;
    }
    arr[j+1] = temp;
}
int main(){
    int arr[5] = {6,23,67,32,9};
    insertionSort(arr,5);
    for(int i=0;i<5;i++){
        cout << arr[i] << " ";
    }
    return 0;
}