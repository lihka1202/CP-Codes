#include <bits/stdc++.h>
using namespace std;

class Solution {
   public:
    vector<int> searchVector(vector<vector<int> > &matrix, int target) {
        int l = 0;
        int r = matrix.size() - 1;
        while (l <= r) {
            int mid = (l + r) / 2;
            //! Peak Finding algorithm
            if (mid != matrix.size() - 1 && matrix[mid][0] < target && matrix[mid + 1][0] > target) {
                return matrix[mid];
                // ! Regular searching algo
            } else if (matrix[mid][0] < target) {
                l = mid + 1;
            } else if (matrix[mid][0] > target) {
                r = mid - 1;
            } else {
                return matrix[mid];
            }
        }
        return matrix[matrix.size() - 1];
    }

    bool searchFinal(vector<int> &nums, int target) {
        int l = 0;
        int r = nums.size();
        while (l <= r) {
            int mid = (l + r) / 2;
            if (nums[mid] < target) {
                l = mid + 1;
            } else if (nums[mid] > target) {
                r = mid - 1;
            } else {
                return true;
            }
        }
        return false;
    }
    bool searchMatrix(vector<vector<int> > &matrix, int target) {
        vector<int> search = searchVector(matrix, target);
        return searchFinal(search, target);
    }
};

int main() {
    vector<vector<int> > matrix = {{1}};
    int target = 1;
    Solution A;
    cout << A.searchMatrix(matrix, target);
}