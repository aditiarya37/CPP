#include<iostream>
using namespace std;
void selectionSort(int *arr, int n, int s){
    if(s>=n-1){
        return;
    }
    int min = s;
    for(int j=s+1;j<n;j++){
        if(arr[j]<arr[min]){
            min = j;
        }
    }
    if(min!=s){
        swap(arr[min],arr[s]);
    }
    selectionSort(arr,n,s+1);
}
int main(){
    int arr[5] = {36,12,3,7,13};
    selectionSort(arr,5,0);
    for(int i=0;i<5;i++){
        cout << arr[i] << " ";
    }
    return 0;
}