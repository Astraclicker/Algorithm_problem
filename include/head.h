#pragma once

#include <bits/stdc++.h>
using namespace std;

//链表
struct ListNode {
    int val;
    ListNode *next;

    ListNode() : val(0), next(nullptr) {
    }

    ListNode(int x) : val(x), next(nullptr) {
    }

    ListNode(int x, ListNode *next) : val(x), next(next) {
    }
};

//二叉树
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode() : val(0), left(nullptr), right(nullptr) {
    }

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {
    }

    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {
    }
};

//打印链表(debug)
inline void print_list(const ListNode *head) {
    auto temp = head;
    while (temp != nullptr) {
        cout << temp->val << endl;
        temp = temp->next;
    }
}
