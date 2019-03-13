/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
/*
Solution from snowfish on https://leetcode.com/problems/remove-duplicates-from-sorted-list-ii/discuss/28335/My-accepted-Java-code
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
            while (cur->next != NULL && cur->val == cur->next->val)
            {
                temp = cur->next;
                delete cur;
                cur = temp;
                // cur = cur->next;
            }
            if (pre->next == cur)
            {
                pre = cur;
                cur = cur->next;
            }
            else
            {
                pre->next = cur->next;
                delete cur;
                cur = pre->next;
            }
        }
        return res->next;
    }
};