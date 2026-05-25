#include <head.h>

class Solution {
public:
    ListNode *reverse(ListNode *head, int left, int right) {
        auto ptr = new ListNode();
        auto begin = new ListNode();
        auto end = new ListNode();

        //查找begin与end与begin的前一位
        auto temp = head;
        for (int i = 1; i <= right; i++) {
            if (left == 1) {
                ptr = nullptr;
            } else if (i == left - 1) {
                ptr = temp;
            }
            if (i == left) {
                begin = temp;
            }
            if (i == right) {
                end = temp;
            }
            temp = temp->next;
        }

        auto current = begin->next;

        begin->next = end->next;

        int cnt = right - left;

        while (cnt--) {
            auto fin = current->next;
            current->next = begin;
            begin = current;
            current = fin;
        }
        if (ptr != nullptr) {
            ptr->next = begin;
        } else {
            head = begin;
        }

        return head;
    }

    ListNode *reverseKGroup(ListNode *head, int k) {
        int length = 0;
        auto temp = head;
        while (temp != nullptr) {
            length++;
            temp = temp->next;
        }

        for (int i = 1; i <= length-k+1; i += k) {
            head = reverse(head, i, i + k - 1);
        }
        return head;
    }
};
