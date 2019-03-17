/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
/*
Solution from leehomjan on https://leetcode.com/problems/remove-nth-node-from-end-of-list/discuss/9000/A-simple-2ms-C-solution
*/
class Solution 
{
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        ListNode *front = head, *back = head;
        while (front != NULL)
        {
            front = front->next;
            if (n-- < 0) back = back->next;
        }
        if (n == 0) head = head->next;
        else back->next = back->next->next;
        return head;
    }
};