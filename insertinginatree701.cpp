#include <bits/stdc++.h>

#define fastio                                                                 \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL)

#define endl "\n"

using namespace std;
class Solution {
public:
  TreeNode *insertIntoBST(TreeNode *root, int val) {
    // Check if the tree is NULL
    if (!root) {
      return new TreeNode(val);
    }

    // Check if the value to be inserted is larger or smaller, in either case if
    // equal, just return the root
    if (val > root->val) {
      root->right = insertIntoBST(root->right, val);
    } else if (val < root->val) {
      root->left = insertIntoBST(root->left, val);
    }
    return root;
  }
};

int main() {
  fastio;
  // code goes here
  return 0;
}