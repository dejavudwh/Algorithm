/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    // 快慢指针
    ListNode *detectCycle(ListNode *head) {
        ListNode *slow = head, *fast = head;
        // 判断是否存在环路
        do {
            if (!fast || !fast->next) {
                return nullptr;
            }
            fast = fast->next->next;
            slow = slow->next;
        } while (fast != slow);
        // 查找环路
        fast = head;
        while (fast != slow) {
            slow = slow->next;
            fast = fast->next;
        }

        return fast;
    }
};