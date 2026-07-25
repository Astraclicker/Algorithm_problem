#include <head.h>

class Solution {
public:
    int minDepth(TreeNode *root) {
        if (root == nullptr) {
            return 0;
        }
        int ans = INT32_MAX;
        dfs(root, 1, ans);
        return ans;
    }

    void dfs(TreeNode *node, int cnt, int &ans) {
        if (node->left == nullptr && node->right == nullptr) {
            ans = min(ans, cnt);
            return;
        }

        cnt++;

        if (node->left != nullptr) {
            dfs(node->left, cnt, ans);
        }
        if (node->right != nullptr) {
            dfs(node->right, cnt, ans);
        }
    }
};
