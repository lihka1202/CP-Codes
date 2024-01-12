#include <bits/stdc++.h>
using namespace std;

class Solution {
   public:
    bool kokoPasses(vector<int>& piles, int h, int test) {
        int sum = 0;
        for (auto num : piles) {
            sum += num / test;
            num % test > 0 ? sum += 1 : sum = sum;
        }
        // cout << "test: " << test << " sum: " << sum << endl;
        return sum <= h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = *(max_element(piles.begin(), piles.end()));
        // cout << "This is n: " << n << endl;
        int low = 0;
        int high = n;
        int minValue = -1;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (kokoPasses(piles, h, mid) == false) {
                low = mid + 1;
            } else if (kokoPasses(piles, h, mid) == true) {
                minValue = mid;
                high = mid - 1;
            }
        }
        return minValue;
    }
};

int main() {
    Solution A;
    vector<int> nums = {30, 11, 23, 4, 20};
    int h = 5;
    cout << A.minEatingSpeed(nums, h);
}