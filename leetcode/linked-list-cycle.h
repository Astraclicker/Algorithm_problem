#include <head.h>


class Solution {
public:
    bool hasCycle(ListNode *head) {
        auto fast = head;
        auto low = head;

        while (fast != nullptr && fast->next != nullptr) {
            fast = fast->next->next;
            low = low->next;
            if (fast == low) {
                return true;
            }
        }
        return false;
    }
};
