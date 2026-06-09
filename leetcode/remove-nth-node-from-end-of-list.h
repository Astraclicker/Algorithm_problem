#include <head.h>

class Solution {
public:
    //反转链表
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

    ListNode *removeNthFromEnd(ListNode *head, int n) {
        head = reverseList(head);
        if (n == 1) {
            head = head->next;
            reverseList(head);
            return head;
        }

        n--;
        auto temp = head;

        while (--n) {
            temp = temp->next;
        }

        auto current = temp->next;
        temp->next = current->next;
        delete current;
    }
};
