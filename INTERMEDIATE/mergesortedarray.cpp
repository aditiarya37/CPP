#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class mergeSortedArrays {
    public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i=m,j=0;i<nums1.size() && j<n;i++,j++){
            nums1[i] = nums2[j];
        }
        sort(nums1.begin(),nums2.begin());
        for(int i=0;i<nums1.size();i++){
            cout << nums1[i] << " ";
        }
    }
};
int main(){
    mergeSortedArrays sol;
    vector<int> nums1{1,2,3,0,0,0};
    vector<int> nums2{2,4,5};
    int m=3,n=3;
    sol.merge(nums1,m,nums2,n);
    return 0;
}