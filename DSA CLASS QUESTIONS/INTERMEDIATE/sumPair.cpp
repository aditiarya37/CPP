#include<iostream>
using namespace std;
void sumPair(int arr[], int n, int sum){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[i]+arr[j]==sum){
                cout << arr[i] << " " << arr[j] << endl;
            }
        }
    }
}
int main(){
    int arr[10];
    cout << "Enter the elements of the array: " << endl;
    for(int i=0;i<10;i++){
        cin >> arr[i];
    }
    int sum;
    cout << "Enter the sum: ";
    cin >> sum;
    sumPair(arr,10,sum);
    return 0;
}