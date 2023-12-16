#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // use the 2 pointer approach to solve this
        // set the left pointer to be the zero finder
        // set the right pointer to be the swap creator
        int left = 0;
        int right = 0;
        while(left < nums.size() && right < nums.size()) {
            if(nums[left]==0 && nums[right]!=0) {
                nums[left] = nums[right];
                nums[right] = 0;
                left+=1;
                right +=1;
            } else if(nums[left]!=0 && nums[right]==0){
                left = right;
            } else {
                right+=1;
            }
        }
    }
};

int main() {
    vector<int> nums = {0,1,0,3,12};
    // vector<int> nums = {1,0,1};
    Solution a;
    a.moveZeroes(nums);
    for(auto num : nums) {
        cout<< num << endl;
    }
}