#include <head.h>

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        auto low = head;
        auto fast = head;

        while (fast != nullptr && fast->next != nullptr) {
            fast = fast->next->next;
            low = low->next;
            if (low == fast) {
                while (low != head) {
                    low = low->next;
                    head = head->next;
                }
                return low;
            }
        }
        return nullptr;
    }
};
