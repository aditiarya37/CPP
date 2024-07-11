#include<iostream>
using namespace std;
int selectionSort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        int min = i;
        for(int j=i+1;j<n;j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        swap(arr[min], arr[i]);
    }
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}
int main(){
    int arr[5] = {73,41,92,32,55};
    selectionSort(arr,5);
    return 0;
}