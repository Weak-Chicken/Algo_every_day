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
        ListNode *cur = new ListNode(-1), *res = cur; cur->next = head;
        while (cur != NULL && cur->next != NULL)
        {
            if (cur->next->val == val) cur->next = cur->next->next;
            else cur = cur->next;
        }
        return res->next;
    }
};