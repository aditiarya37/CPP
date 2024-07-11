#include<iostream>
using namespace std;
void reverse(int arr[],int n){
    // We can do this using while loop with the condition (i<=j)
    for(int i=0,j=(n-1);i<n&&j>=i;i++,j--){
        /*int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;*/
        swap(arr[i],arr[j]);
    }
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}
int main(){
    int arr[10],size;
    cout << "Size: ";
    cin >> size;
    for(int i=0;i<size;i++){
        cin >> arr[i];
    }
    reverse(arr,size);
    return 0;
}
/*void reverseArray(vector<int> &arr , int m){
    int n = arr.size()-1;
    int i = m+1;
    while(i<=n){
        swap(arr[i],arr[n]);
        i++;
        n--;
    }        	
}*/