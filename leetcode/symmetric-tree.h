#pragma once
#include <head.h>

class Solution {
public:
    bool isSymmetric(TreeNode *root) {
        if (root == nullptr)
            return true;
        return isSameTree(root->left, root->right);
    }

    bool isSameTree(TreeNode *p, TreeNode *q) {
        if (p == nullptr && q == nullptr) {
            return true;
        }
        if (p == nullptr || q == nullptr) {
            return false;
        }
        if (p->val != q->val) {
            return false;
        }

        return isSameTree(p->right, q->left) && isSameTree(p->left, q->right);
    }
};
