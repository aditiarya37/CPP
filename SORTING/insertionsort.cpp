#include<iostream>
using namespace std;
void insertionSort(int arr[], int n){
    int i=1;
    while(i<n){
        int temp = arr[i];
        int j = i-1;
        while(j>=0){
            if(arr[j] > temp){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
            j--;
        }
        arr[j+1] = temp;
        i++;
    }
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}
int main(){
    int arr[5] = {73,41,92,32,55};
    insertionSort(arr,5);
    return 0;
}