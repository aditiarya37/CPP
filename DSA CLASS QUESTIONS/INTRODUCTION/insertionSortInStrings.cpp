#include<iostream>
#include<string>
using namespace std;
void insertionSort(string arr[], int n){
    int i = 1;
    while(i<n){
        string temp = arr[i];
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
    string arr[6] = {"aman","anjali","anika","aastha","aditi","arya"};
    insertionSort(arr,6);
    return 0;
}