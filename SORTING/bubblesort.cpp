#include<iostream>
using namespace std;
void bubbleSort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        bool swapped = false;
        for(int j=i+1;j<n;j++){
            if(arr[i] > arr[j]){
                swap(arr[i], arr[j]);
                swapped = true;
            }
        }
        if(swapped == false){
            // reduces time complexity to O(n)
            break;
        }
    }
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}
int main(){
    int arr[5] = {73,41,92,32,55};
    bubbleSort(arr,5);
    return 0;
}