#include<iostream>
using namespace std;
int linearSearch(int arr[], int n, int ele){
    for(int i=0;i<n;i++){
        if(arr[i]==ele){
            return i;
        }
    }
    return -1;
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
    int ele;
    cout << "Enter the element to be searched: ";
    cin >> ele;
    cout << "Element found at index: " << linearSearch(arr,n,ele);
    return 0;
}