#include<iostream>
using namespace std;
int swapalternates(int arr[],int n){
    for(int i=0;i<n;i=i+2){
        if((i+1)<n){
            swap(arr[i],arr[i+1]);
        }
    }
}
int main(){
    int n,arr[10];
    cout << "Size: ";
    cin >> n;
    cout << "Enter the elements: " << endl;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    swapalternates(arr,n);
    cout << "Printing the array: " << endl;
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}