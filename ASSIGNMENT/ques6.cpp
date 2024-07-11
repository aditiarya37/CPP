#include<iostream>
using namespace std;
int main(){
    int arr1[10],arr2[10],n1,n2;
    cout << "Enter the size of array 1: ";
    cin >> n1;
    cout << "Enter the size of array 2: ";
    cin >> n2;
    cout << "Enter the elements of array 1: ";
    for(int i=0;i<n1;i++){
        cin >> arr1[i];
    }
    cout << "Enter the elements of array 2: ";
    for(int i=0;i<n2;i++){
        cin >> arr2[i];
    }
    bool flag;
    for(int i=0;i<n1;i++){
        flag = 0;
        for(int j=0;j<n2;j++){
            if(arr1[i]==arr2[j]){
                flag = 1;
                break;
            }
        }
        if(!flag){
            cout << arr1[i] << endl;
        }
    }
    return 0;
}