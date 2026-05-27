#pragma once

#include <bits/stdc++.h>
using namespace std;

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

//打印链表(debug)
inline void print_list(const ListNode *head) {
    auto temp = head;
    while (temp != nullptr) {
        cout << temp->val << endl;
        temp = temp->next;
    }
}
