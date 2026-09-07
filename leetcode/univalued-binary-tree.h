#pragma once
#include <head.h>

class Solution {
public:
    void func(TreeNode *root, int &sum, int &cnt) {
        if (root != nullptr) {
            sum += root->val;
            cnt++;
            func(root->left, sum, cnt);
            func(root->right, sum, cnt);
        }
    }


    bool isUnivalTree(TreeNode *root) {
        int sum = 0;
        int cnt = 0;
        func(root, sum, cnt);
        if (sum == 0) {
            return true;
        }
        if (static_cast<double>(sum) / static_cast<double>(cnt) == root->val) {
            return true;
        }
        return false;
    }
};
