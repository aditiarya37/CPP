#include<iostream>
using namespace std;
void display(int arr[], int n){
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}
int main(){
    int arr[10],size;
    cout << "Enter the size: ";
    cin >> size;
    cout << "Enter the elements of the array: " << endl;
    for(int i=0;i<size;i++){
        cin >> arr[i];
    }
    int choice;
    cout << "Enter your choice:\n1) Selection Sort\n2) Insertion Sort\n3) Bubble Sort\n";
    cin >> choice;
    switch(choice){
        case 1:
        for(int i=0;i<size-1;i++){
            int min = i;
            for(int j=i+1;j<size;j++){
                if(arr[j]<arr[min]){
                    min = j;
                }
            }
            swap(arr[min],arr[i]);
        }
        display(arr,size);
        break;
        case 2:
        for(int i=1;i<size;i++){
            int temp = arr[i];
            int j = i-1;
            while(j>=0){
                if(arr[j]>temp){
                    arr[j+1] = arr[j];
                }
                else{
                    break;
                }
                j--;
            }
            arr[j+1] = temp;
        }
        display(arr,size);
        break;
        case 3:
        for(int i=0;i<size-1;i++){
            for(int j=i+1;j<size;j++){
                if(arr[i]>arr[j]){
                    swap(arr[i],arr[j]);
                }
            }
        }
        display(arr,size);
    }
    return 0;
}