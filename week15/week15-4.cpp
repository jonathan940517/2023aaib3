/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1 = myReverse(l1);
        l2 = myReverse(l2);
        ListNode* ans = new ListNode();
        ListNode* now = ans;
        int carry = 0;
        while (l1 != nullptr || l2 != nullptr) {
            if (l1 == nullptr) {
                int here = l2->val + carry;
                now->next = new ListNode(here % 10);
                carry = here / 10;
                l2 = l2->next;
            } else if (l2 == nullptr) {
                int here = l1->val + carry;
                now->next = new ListNode(here % 10);
                carry = here / 10;
                l1 = l1->next;

            } else {
                int here = l1->val + l2->val + carry;
                now->next = new ListNode(here % 10);
                carry = here / 10;
                l1 = l1->next;
                l2 = l2->next;
            }
            now = now->next;
        }
        if (carry)
            now->next = new ListNode(1);
        return myReverse(ans->next);
    }
    ListNode* myReverse(ListNode* head) {
        vector<int> a;
        while (head != nullptr) {
            a.push_back(head->val);
            head = head->next;
        }
        ListNode* ans = new ListNode();
        ListNode* now = ans;
        for (int i = a.size() - 1; i >= 0; i--) {
            now->next = new ListNode(a[i]);
            now = now->next;
        }
        return ans->next;
    }
};