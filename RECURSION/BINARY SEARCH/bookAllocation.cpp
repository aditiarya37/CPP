#include<iostream>
#include<vector>
using namespace std;
bool isPossible(vector<int> &arr, int n, int m, int mid){
    int studentCount = 1;
    int pageSum = 0;
    for(int i=0;i<7;i++){
        if(pageSum + arr[i] <= mid){
            pageSum += arr[i];
        }
        else{
            studentCount++;
            if(studentCount>m || arr[i]>mid){
                return 0;
            }
            pageSum = arr[i];
        }
    }
    return 1;
}
int allocateBooks(vector<int> &arr, int n, int s, int e, int m){
    if(m>n){
        return -1;
    }
    int ans = -1;
    if(s>e){
        return ans;
    }
    int mid = s + (e-s)/2;
    if(isPossible(arr,7,2,mid)){
        int temp = allocateBooks(arr,n,s,mid-1,m);
        if(temp!=-1){
            return temp;
        }
        return mid;
    }
    else{
        return allocateBooks(arr,n,mid+1,e,m);
    }
}
int main(){
    vector<int> arr{1,17,14,9,15,9,14};
    int sum = 0;
    for(int i=0;i<7;i++){
        sum += arr[i];
    }
    int n = 7;
    cout << allocateBooks(arr,n,0,sum,2);
    return 0;
}