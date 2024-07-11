#include<iostream>
using namespace std;
int main(){
    int arr[5] = {1,3,6,8,10};
    int arr2[3] = {2,4,5};
    int ans[8];
    int i=0, j=0;
    int k=0;
    while(i<8 && j<3){
        if(arr[i]<arr2[j]){
            ans[k++] = arr[i++];
        }
        else{
            ans[k++] = arr2[j++];
        }
    }
    while(i<8){
        ans[k++] = arr[i++];
    }
    while(j<3){
        ans[k++] = arr2[j++];
    }
    for(int i=0;i<8;i++){
        cout << ans[i] << " ";
    }
    return 0;
}