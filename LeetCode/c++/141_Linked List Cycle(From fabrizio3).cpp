/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
/*
Solution from fabrizio3 on https://leetcode.com/problems/linked-list-cycle/discuss/44489/O(1)-Space-Solution
*/
class Solution 
{
public:
    bool hasCycle(ListNode *head) 
    {
        ListNode *slower = head, *faster = head;
        if (head == NULL || head->next == NULL) return false;
        while (faster->next != NULL && faster->next->next != NULL)
        {
            slower = slower->next;
            faster = faster->next->next;
            if (slower == faster) return true;
        }
        return false;
    }
};