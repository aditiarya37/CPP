#include<iostream>
using namespace std;
int partition(int *arr, int s, int e){
    int pivot = arr[s];
    int count = 0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivot){
            count++;
        }
    }
    int index = s + count;
    swap(arr[index],arr[s]);
    int i=s, j=e;
    while(i<index && j>index){
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<index && j>index){
            swap(arr[i++],arr[j--]);
        }
    }
    return index;
}
void quickSort(int *arr, int s, int e){
    if(s>=e){
        return;
    }
    int p = partition(arr,s,e);
    quickSort(arr,s,p-1);
    quickSort(arr,p+1,e);
}
int main(){
    int arr[7] = {6,13,88,4,44,4,4};
    int n = 7;
    quickSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}