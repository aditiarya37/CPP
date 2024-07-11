#include<iostream>
using namespace std;
int pivotValue(int *arr, int s, int e){
    if(s==e){
        return s;
    }
    int mid = s + (e-s)/2;
    if(arr[mid]>=arr[0]){
        return pivotValue(arr,mid+1,e);
    }
    else{
        return pivotValue(arr,s,mid);
    }
}
int main(){
    int arr[7] = {5,6,7,8,1,2,3};
    cout << "Pivot Value Index: " << pivotValue(arr,0,6);
    return 0;
}