#include <head.h>

class Solution {
public:
    ListNode *middleNode(ListNode *head) {
        auto fast = head;
        auto low = head;

        while (fast != nullptr && fast->next != nullptr) {
            fast = fast->next;
            low = low->next->next;
        }
        return low;
    }
};
