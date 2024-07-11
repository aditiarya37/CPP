#include<iostream>
using namespace std;
void bubbleSort(int arr[], int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
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
    bubbleSort(arr,n);
    return 0;
}