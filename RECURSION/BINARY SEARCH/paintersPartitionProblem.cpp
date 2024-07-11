#include<iostream>
#include<vector>
using namespace std;
bool isPossible(vector<int> &arr, int n, int m, int mid){
    int paintersCount = 1;
    int boardLen = 0;
    for(int i=0;i<n;i++){
        if(arr[i]+boardLen<=mid){
            boardLen += arr[i];
        }
        else{
            paintersCount++;
            if(paintersCount>m || arr[i]>mid){
                return 0;
            }
            boardLen = arr[i];
        }
    }
    return 1;
}
int paintersPartition(vector<int> &arr, int n, int s, int e, int m){
    if(m>n){
        return -1;
    }
    int ans = -1;
    if(s>e){
        return ans;
    }
    int mid = s + (e-s)/2;
    if(isPossible(arr,n,m,mid)){
        int temp = paintersPartition(arr,n,s,mid-1,m);
        if(temp!=-1){
            return temp;
        }
        return mid;
    }
    else{
        return paintersPartition(arr,n,mid+1,e,m);
    }
}
int main(){
    vector<int> arr{10,20,30,40};
    int sum = 0;
    int n = arr.size();
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    cout << paintersPartition(arr,n,0,sum,2);
    return 0;
}