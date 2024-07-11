#include<iostream>
#include<vector>
#include<climits>
using namespace std;
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int low = 0;
        int high = arr.size()-1;
        while(low<high){
            int mid = low + (high-low)/2;
            if(arr[mid]<arr[mid+1]){
                low = mid+1;
            }
            else{
                high = mid;
            }
        }
        return low;
    }
};
class Solution2 {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int max = INT_MIN;
        int maxIndex = -1;
        for(int i=0;i<arr.size();i++){
            if(arr[i]>max){
                max = arr[i];
                maxIndex = i;
            }
        }
        return maxIndex;
    }
};
int main(){
    vector<int> arr{5,6,7,35,123,444,26,25,23};
    Solution obj;
    cout << obj.peakIndexInMountainArray(arr) << endl;
    Solution2 obj2;
    cout << obj2.peakIndexInMountainArray(arr);
    return 0;
}