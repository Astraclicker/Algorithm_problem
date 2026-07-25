#include <head.h>

class Solution {
public:
    bool hasPathSum(TreeNode *root, int targetSum) {
        if (root == nullptr) {
            return false;
        }
        bool ans = false;
        dfs(root, 0, ans, targetSum);
        return ans;
    }

    void dfs(TreeNode *node, int cnt, bool &ans, int targetSum) {
        cnt += node->val;
        if (node->left == nullptr && node->right == nullptr) {
            if (cnt == targetSum) {
                ans = true;
            }
            return;
        }

        if (node->left != nullptr) {
            dfs(node->left, cnt, ans, targetSum);
        }
        if (node->right != nullptr) {
            dfs(node->right, cnt, ans, targetSum);
        }
    }
};
