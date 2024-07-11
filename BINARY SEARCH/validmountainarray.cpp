#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int pivotIndex(vector<int>& arr){
        int n = arr.size();
        for(int i=1;i<n-1;i++){
            if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
                return i;
            }
        }
        return -1;
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
    vector<int>arr{2,3,5,0};
    Solution peak;
    cout << "Answer: " << peak.validMountainArray(arr) << endl;
    cout << "Index: " << peak.pivotIndex(arr);
    return 0;
}