/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
/*
Solution from caraxin on https://leetcode.com/problems/remove-duplicates-from-sorted-list-ii/discuss/28335/My-accepted-Java-code
*/
class Solution 
{
public:
    ListNode* deleteDuplicates(ListNode* head) 
    {
        if (head == NULL) return head;
        ListNode* res = new ListNode(-1);
        res->next = head;
        ListNode* pre = res;
        ListNode* cur = head;
        ListNode* temp;
        
        while (cur != NULL)
        {
            while(cur != NULL && cur->next != NULL && cur->val == cur->next->val)
            {
                while (cur->next != NULL && cur->val == cur->next->val)
                {
                    // temp = cur->next;
                    // delete cur;
                    // cur = temp;
                    cur = cur->next;
                }
                // temp = cur->next;
                // delete cur;
                // cur = temp;
                cur = cur->next;
            }
            pre = pre->next = cur;
            if (cur != NULL) cur = cur->next;
        }
        return res->next;
    }
};