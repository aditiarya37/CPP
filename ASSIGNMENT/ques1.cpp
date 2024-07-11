#include<iostream>
using namespace std;
int findLargest(int arr[], int n){
    int max = arr[0];
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    return max;
}
int findSmallest(int arr[], int n){
    int min = arr[0];
    for(int i=0;i<n;i++){
        if(min>arr[i]){
            min = arr[i];
        }
    }
    return min;
}
int main(){
    int arr[6] = {45,32,63,11,37,86};
    cout << "Maximum Element: " << findLargest(arr,6) << endl;
    cout << "Minimum Element: " << findSmallest(arr,6);
    return 0;
}