#include<iostream>
using namespace std;
int main(){
    int arr[10],size;
    cout << "Enter the size of the array: ";
    cin >> size;
    cout << "Enter the elements of the array: ";       
    for(int i=0;i<size;i++){
        cin >> arr[i];
    }
    int newSize = size;
    for(int i=0;i<size;i++){              
        int el = arr[i];
        for(int j=i+1;j<newSize;j++){
            if(arr[j]==el){
                for(int k=j;k<newSize-1;k++){
                    arr[k] = arr[k+1];
                }
                newSize--;
                j--;
            }
        }
    }
    for(int i=0;i<newSize;i++){
        cout << arr[i] << " ";
    }
    return 0;
}