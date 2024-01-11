#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

class Solution {
public:
  int search(vector<int> &nums, int target) {
    int l = 0;
    int r = nums.size() - 1;

    while (l <= r) {
      int mid = (l + r) / 2;
      if (nums[mid] == target) {
        return mid;
      } else if (nums[mid] <= target) {
        l = mid + 1;
      } else {
        r = mid - 1;
      }
    }
    return -1;
  }
};

using namespace std;

int main() {

  // To test
  Solution A;
  vector<int> nums = {-1, 0, 3, 5, 9, 12};
  cout << A.search(nums, 9);
}
