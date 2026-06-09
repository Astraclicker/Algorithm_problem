#include <head.h>

class Solution {
public:
    static void rm_next(ListNode *node) {
        if (node->next == nullptr) {
            return;
        }
        auto temp = node->next;
        node->next = temp->next;
        delete temp;
    }


    ListNode *deleteDuplicates(ListNode *head) {
        auto current = head;
        if (current == nullptr) {
            return nullptr;
        }
        while (current->next != nullptr) {
            if (current->val == current->next->val) {
                rm_next(current);
                continue;
            }
            current = current->next;
        }
        return head;
    }
};
