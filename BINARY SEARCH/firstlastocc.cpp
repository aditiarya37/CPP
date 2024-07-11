#include<iostream>
#include<vector>
using namespace std;
int firstOcc(vector<int>& arr, int n, int k){
    int low = 0;
    int high = n-1;
    int firstPos = -1;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(arr[mid]==k){
            firstPos = mid;
            high = mid-1;
        }
        else if(arr[mid]>k){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return firstPos;
}
int lastOcc(vector<int>& arr, int n, int k){
    int low = 0;
    int high = n-1;
    int lastPos = -1;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(arr[mid]==k){
            lastPos = mid;
            low = mid+1;
        }
        else if(arr[mid]>k){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return lastPos;
}
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    pair <int, int> p;
    p.first = firstOcc(arr,n,k);
    p.second = lastOcc(arr,n,k);
    return p;
}
int main(){
    vector<int> arr{1,2,3,3,3,5};
    int k;
    cout << "Enter the key: ";
    cin >> k;
    pair<int, int> ans = firstAndLastPosition(arr,6,k);
    cout << ans.first << " " << ans.second;
    return 0;
}

