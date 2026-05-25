#pragma once
#include <head.h>

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
