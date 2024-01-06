#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int quicksort(vector<int>& arr, int s, int e, int k) {
        // base case, if the array only has 1 element
        // if(e - s + 1 <=1) {
        //     return arr[0];
        // }

        int pivot = arr[e];
        int left = s;

        //partition algo
        for(int i = s; i < e; i+=1) {
            if(arr[i] < pivot) {
                // int tmp = arr[left];
                // arr[left] = arr[i];
                // arr[i] = tmp;
                swap(arr[left], arr[i]);
                ++left;
            }
        }
        
        // Move the pivot to the right position, more like swap
        // arr[e] = arr[left];
        // arr[left] = pivot;

        swap(arr[e], arr[left]);

        cout<< arr[left]<<endl;
        // Check if the pivot value is correct
        if(left == k) {
            return arr[left];
        } else if(left > k){
            return quicksort(arr, s, left-1, k);
        } else {
            return quicksort(arr, left+1, e, k);
        }
    }
    int findKthLargest(vector<int>& nums, int k) {
        k = nums.size() - k;
        return quicksort(nums, 0, nums.size()-1, k);
    }
};

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> pq;
        for (int i = 0; i < nums.size(); i++) {
            pq.push(nums[i]);
            if (pq.size() > k) {
                pq.pop();
            }
        }
        return pq.top();
    }
};

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int index = nums.size() - k;
        return quickSelect(nums, index, 0, nums.size() - 1);
    }
private:
    int quickSelect(vector<int>& nums, int k, int l, int r){
        int pivot = nums[r];
        int p_pos = l;
        for (int i = l; i < r; ++i){
            if (nums[i] <= pivot){
                swap(nums[i], nums[p_pos]);
                ++p_pos;
            }
        }
        swap(nums[p_pos], nums[r]);
        if (k < p_pos) // left > k
            return quickSelect(nums, k, l, p_pos - 1); //s to left -1
        if (k > p_pos) // left < k
            return quickSelect(nums, k, p_pos + 1, r); // left + 1 to e
        return nums[p_pos];
    }
};

int main() {
    int k = 1;

    Solution A;
    vector<int> input = {2,1};
    cout<< A.findKthLargest(input, k);


}