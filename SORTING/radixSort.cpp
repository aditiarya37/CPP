#include<iostream>
using namespace std;
void countSort(int arr[], int n, int x){
    int count[10] = {0};
    int ans[n];
    for(int i=0;i<n;i++){
        count[(arr[i]/x)%10]++;
    }
    for(int i=1;i<=n;i++){
        count[i] += count[i-1];
    }
    for(int i=n-1;i>=0;i--){
        ans[count[(arr[i]/x)%10]-1] = arr[i];
        count[(arr[i]/x)%10]--;
    }
    for(int i=0;i<n;i++){
        arr[i] = ans[i];
    }
}
void radixSort(int arr[], int n){
    int mx = 0;
    for(int i=0;i<n;i++){
        mx = max(mx,arr[i]);
    }
    for(int i=1;mx/i>0;i*=10){
        countSort(arr,n,i);
    }
}
void print(int arr[], int n){
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}
int main(){
    int arr[7] = {341,653,2144,654,452,325,657};
    radixSort(arr,7);
    print(arr,7);
    return 0;
}