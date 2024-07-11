#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool isPossible(vector<int> &stalls, int k, int n, int mid){
    int cowsCount = 1;
    int lastPos = stalls[0];
    for(int i=0;i<=n;i++){
        if(stalls[i]-lastPos >= mid){
            cowsCount++;
            if(cowsCount==k){
                return true;
            }
            lastPos = stalls[i];
        }
    }
    return false;
}
int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(), stalls.end());
    int s=0;
    int maxv = -1;
    int n = stalls.size()-1;
    for(int i=0;i<=n;i++){
        maxv = max(maxv,stalls[i]);
    }
    int ans = -1;
    int e=maxv;
    while(s<=e){
        int mid = s+(e-s)/2;
        if(isPossible(stalls,k,n,mid)){
            ans = mid;
            s = mid+1;
        }
        else{
            e = mid-1;
        }
    }
    return ans;
}
int main(){
    int sol;
    vector<int>arr{87,93,51,81,68,99,59};
    sol = aggressiveCows(arr,4);
    cout << sol;
    return 0;
}