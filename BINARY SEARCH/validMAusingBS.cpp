#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int pivotIndex(vector<int>& arr){
        int n = arr.size();
        int low = 0;
        int high = n-1;
        while(low<high){
            int mid = low+(high-low)/2;
            if(arr[mid]<arr[mid+1]){
                low = mid+1;
            }
            else{
                high = mid;
            }
        }
        return low;
    }
    bool validMountainArray(vector<int>& arr) {
        int n = arr.size();
        int ans;
        if(n<3){
            return false;
        }
        ans = pivotIndex(arr);
        /*if(ans>0 && ans<=n){
            return true;
        }
        else{
            return false;
        }*/
        return ans != -1 && ans > 0 && ans < n - 1;
    }
};
int main(){
    vector<int>arr{2,3,5,7,3,1};
    Solution peak;
    cout << "Answer: " << peak.validMountainArray(arr) << endl;
    cout << "Index: " << peak.pivotIndex(arr);
    return 0;
}