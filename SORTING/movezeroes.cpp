#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0,j=0;
        int n = nums.size();
        while(i<n){
            if(nums[i]!=0){
                nums[j++] = nums[i++];
            }
            else{
                i++;
            }
        }
        while(j<n){
            nums[j++] = 0;
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
    vector<int> nums{0,1,0,3,12};
    abc.moveZeroes(nums);
    abc.print(nums);
    return 0;
}
/*class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for(int i=0,j=0;j<nums.size();j++){
            if(nums[j]!=0){
                swap(nums[i], nums[j]);
                i++;
            }
        }
    }
};*/