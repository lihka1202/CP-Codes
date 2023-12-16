#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int sol_len = 0;
        if(nums.size()==1) {
            return 1;
        }
        set<int> sol;
        for(auto n : nums) {
            sol.insert(n);
        }

        // delete the elements from here:
        int left = 0;
        int right = 0;
        while(left < nums.size() && right < nums.size()){
            if(nums[left]==nums[right]) {
                right+=1;
            } else if(nums[left]!=nums[right]){
                left+=1;
                nums[left]=nums[right];
            }
        }

        return left + 1;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
    auto *ans = new Solution();
    cout<< ans->removeDuplicates(nums);

    

    return 0;
}