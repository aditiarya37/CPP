#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=m-1,j=n-1,k=m+n-1;
        while(i>=0 && j>=0){
            if(nums1[i]>=nums2[j]){
                nums1[k--] = nums1[i--];
            }
            else{
                nums1[k--] = nums2[j--];
            }
        }
        while(i>=0){
            nums1[k--] = nums1[i--];
        }
        while(j>=0){
            nums1[k--] = nums2[j--];
        }
    }
    void print(vector<int>& nums1){
        for(int i=0;i<nums1.size();i++){
            cout << nums1[i] << " ";
        }
    }
};
int main(){
    Solution abc;
    vector<int> nums1{1,2,3,0,0,0};
    vector<int> nums2{2,5,6};
    abc.merge(nums1,3,nums2,3);
    abc.print(nums1);
    return 0;
}