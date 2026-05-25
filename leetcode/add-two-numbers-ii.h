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
    ListNode *reverse(ListNode *head) {
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

    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        l1 = reverse(l1);
        l2 = reverse(l2);

        auto ans = new ListNode((l1->val + l2->val) % 10);
        int temp = (l1->val + l2->val) / 10; //进位值
        l1 = l1->next;
        l2 = l2->next;

        if (l1 == nullptr && l2 == nullptr) {
            if (temp > 0) {
                ans->next = new ListNode(temp);
                return reverse(ans);
            }
            return ans;
        }
        auto current = ans;

        while (l1 != nullptr || l2 != nullptr) {
            if (l1 == nullptr) {
                //l1为空,l2不为空
                current->next = new ListNode((l2->val + temp) % 10);
                temp = (l2->val + temp) / 10;
                l2 = l2->next;
                if (l2 == nullptr && temp > 0) {
                    current = current->next;
                    current->next = new ListNode(temp);
                }
            } else {
                if (l2 == nullptr) {
                    //l1不为空,l2为空
                    current->next = new ListNode((l1->val + temp) % 10);
                    temp = (l1->val + temp) / 10;
                    l1 = l1->next;
                    if (l1 == nullptr && temp > 0) {
                        current = current->next;
                        current->next = new ListNode(temp);
                    }
                } else {
                    //l1不为空,l2也不为空
                    current->next = new ListNode((l1->val + l2->val + temp) % 10);
                    temp = (l1->val + l2->val + temp) / 10;
                    l1 = l1->next;
                    l2 = l2->next;
                    if (l1 == nullptr && l2 == nullptr && temp > 0) {
                        current = current->next;
                        current->next = new ListNode(temp);
                    }
                }
            }
            current = current->next;
        }
        return reverse(ans);
    }
};
