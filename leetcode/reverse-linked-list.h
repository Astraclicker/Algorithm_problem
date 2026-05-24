#pragma once
#include <head.h>

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

class Solution {
public:
    ListNode *reverseList(ListNode *head) {
        if (head == nullptr) {
            return nullptr;
        }

        auto current = head->next;

        head->next = nullptr;


        while (current != nullptr) {
            auto temp = current->next;

            current->next = head;

            head = current;
            current = temp;
        }
        return head;
    }
};
