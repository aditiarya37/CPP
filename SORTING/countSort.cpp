#include<iostream>
using namespace std;
void countSort(int arr[], int n){
    int mx = 0;
    for(int i=0;i<n;i++){
        mx = max(mx,arr[i]);
    }
    int count[mx+1] = {0};
    for(int i=0;i<n;i++){
        count[arr[i]]++;
    }
    for(int i=1;i<=n;i++){
        count[i] += count[i-1];
    }
    int ans[n];
    for(int i=n-1;i>=0;i--){
        ans[count[arr[i]]-1] = arr[i];
        count[arr[i]]--;
    }
    for(int i=0;i<n;i++){
        cout << ans[i] << " ";
    }
}
int main(){
    int arr[7] = {5,3,5,2,2,3,1};
    countSort(arr,7);
    return 0;
}