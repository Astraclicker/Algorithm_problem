#include <head.h>

class Solution {
public:
    int sumOfLeftLeaves(TreeNode *root) {
        int ans = 0;
        dfs(root, ans);
        return ans;
    }

    void dfs(TreeNode *node, int &ans) {
        if (node == nullptr) {
            return;
        }
        if (node->left == nullptr) {
            dfs(node->right, ans);
            return;
        }
        if (node->left->left == nullptr && node->left->right == nullptr) {
            ans += node->left->val;
            dfs(node->right, ans);
            return;
        }


        dfs(node->left, ans);
        dfs(node->right, ans);
    }
};
