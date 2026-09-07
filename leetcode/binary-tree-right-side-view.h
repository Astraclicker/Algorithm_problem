#pragma once
#include <head.h>

class Solution {
public:
    bool Recursion(TreeNode *root, vector<int> &ans, unsigned int depth) {
        if (root == nullptr) {
            return false;
        }

        if (ans.size() == depth) {
            ans.push_back(root->val);
        }
        if (!Recursion(root->right, ans, depth + 1)) {
            Recursion(root->left, ans, depth + 1);
        }
        return false;
    }

    vector<int> rightSideView(TreeNode *root) {
        vector<int> ans;
        Recursion(root, ans, 0);
        return ans;
    }
};
