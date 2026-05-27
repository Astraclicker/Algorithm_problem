#include <head.h>

class Solution {
public:
    //反转
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

    //查找中间节点
    ListNode *find_mid(ListNode *head) {
        auto fast = head;
        auto low = head;

        while (fast != nullptr && fast->next != nullptr) {
            fast = fast->next->next;
            low = low->next;
        }
        return low;
    }

    bool isPalindrome(ListNode *head) {
        auto list = reverseList(find_mid(head));

        while (list != nullptr) {
            if (list->val != head->val) {
                return false;
            }
            list = list->next;
            head = head->next;
        }
        return true;
    }
};
