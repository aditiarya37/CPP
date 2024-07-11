#include<iostream>
using namespace std;
int firstOccurence(int arr[], int s, int e, int k){
    int ans = -1;
    if(s>e){
        return ans;
    }
    int mid = s + (e-s)/2;
    if(arr[mid]==k){
        ans = mid;
        int left = firstOccurence(arr,s,mid-1,k);
        if(left!=-1){
            ans = left;
        }
    }
    else if(arr[mid]<k){
        return firstOccurence(arr,mid+1,e,k);
    }
    else{
        return firstOccurence(arr,s,mid-1,k);
    }
    return ans;
}
int lastOccurence(int arr[], int s, int e, int k){
    int ans = -1;
    if(s>e){
        return ans;
    }
    int mid = s + (e-s)/2;
    if(arr[mid]==k){
        ans = mid;
        int right = lastOccurence(arr,mid+1,e,k);
        if(right!=-1){
            ans = right;
        }
    }
    else if(arr[mid]<k){
        return lastOccurence(arr,mid+1,e,k);
    }
    else{
        return lastOccurence(arr,s,mid-1,k);
    }
    return ans;
}
int main(){
    int arr[6] = {2,2,3,3,4,4};
    int k;
    cout << "Enter the key: ";
    cin >> k;
    cout <<  firstOccurence(arr,0,5,k) << " " << lastOccurence(arr,0,5,k);
    return 0;
}