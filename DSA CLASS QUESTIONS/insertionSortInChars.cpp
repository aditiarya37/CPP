#include<iostream>
using namespace std;
void insertionSort(char arr[], int n){
    int i = 1;
    while(i<n){
        char temp = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1] = arr[j];
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
    char arr[5] = {'c','t','a','b','s'};
    insertionSort(arr,5);
    return 0;
}