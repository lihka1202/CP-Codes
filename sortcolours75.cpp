#include <bits/stdc++.h>
#include <vector>

using namespace std;

class Solution {
public:
  void sortColors(vector<int> &nums) {
    // This can be solved using bucketsort
    vector<int> holder = {0, 0, 0};
    for (auto num : nums) {
      holder[num] += 1;
    }

    // Then we need to go through this array and basically for each number, dump
    // the value in the same array
    int i = 0;
    for (int j = 0; j < 3; j += 1) {
      cout << "numbers of elements: " << holder[j] << endl;
      for (int a = 0; a < holder[j]; a += 1) {
        // ensures that the j is in that position, since it can only be 0,1,2
        nums[i++] = j;
      }
    }
  }
};
int main() {
  freopen("input.txt", "r", stdin);

  freopen("output.txt", "w", stdout);

  vector<int> nums = {2, 0, 2, 1, 1, 0};

  Solution A;
  A.sortColors(nums);
}
