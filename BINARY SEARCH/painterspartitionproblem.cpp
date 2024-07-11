#include<iostream>
#include<vector>
using namespace std;
bool isPossible(vector<int> &boards, int k, int n, int mid){
    int paintersCount = 1;
    int boardlen = 0;
    for(int i=0;i<=n;i++){
        if(boardlen + boards[i] <= mid){
            boardlen += boards[i];
        }
        else{
            paintersCount++;
            if(paintersCount>k || boards[i]>mid){
                return false;
            }
            boardlen = boards[i];
        }
    }
    return true;
}
int findLargestMinDistance(vector<int> &boards, int k){
    int s=0;
    int sum=0;
    int n = boards.size()-1;
    for(int i=0;i<=n;i++){
        sum += boards[i];
    }
    int e=sum;
    int ans = -1;
    while(s<=e){
        int mid = s+(e-s)/2;
        if(isPossible(boards,k,n,mid)){
            ans = mid;
            e = mid-1;
        }
        else{
            s = mid+1;
        }
    }
    return ans;
}
int main(){
    vector<int> boards{10,20,30,40};
    cout << findLargestMinDistance(boards,2);
    return 0;
}