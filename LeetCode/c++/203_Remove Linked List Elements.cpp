/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution 
{
public:
    ListNode* removeElements(ListNode* head, int val) 
    {
        if (head == NULL) return NULL;
        if (head->next == NULL) return (head->val == val) ? NULL : head;
        head->next = removeElements(head->next, val);
        return (head->val == val) ? head->next : head;
    }
};
