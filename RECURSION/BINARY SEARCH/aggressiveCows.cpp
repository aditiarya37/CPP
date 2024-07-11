#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool isPossible(vector<int> &arr, int n, int m, int mid){
    int cowsCount = 1;
    int lastPos = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]-lastPos>=mid){
            cowsCount++;
            if(cowsCount==m){
                return 1;
            }
            lastPos = arr[i];
        }
    }
    return 0;
}
int aggressiveCows(vector<int> &arr, int n, int s, int e, int m){
    sort(arr.begin(),arr.end());
    int ans = -1;
    if(s>e){
        return ans;
    }
    int mid = s + (e-s)/2;
    if(isPossible(arr,n,m,mid)){
        int temp = aggressiveCows(arr,n,mid+1,e,m);
        if(temp!=-1){
            return temp;
        }
        return mid;
    }
    else{
        return aggressiveCows(arr,n,s,mid-1,m);
    }
}
int main(){
    vector<int> arr{87,93,51,81,68,99,59};
    int max = *max_element(arr.begin(),arr.end());
    cout << aggressiveCows(arr,7,0,max,4);
    return 0;
}