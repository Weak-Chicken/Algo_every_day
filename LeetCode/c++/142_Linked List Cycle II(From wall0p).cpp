/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
/*
Solution from wall0p on https://leetcode.com/problems/linked-list-cycle-ii/discuss/44793/O(n)-solution-by-using-two-pointers-without-change-anything
*/
class Solution 
{
public:
    ListNode *detectCycle(ListNode *head) 
    {
        ListNode *slower = head, *faster = head;
        if (head == NULL || head->next == NULL || head->next->next == NULL) return NULL;
        while (faster->next != NULL && faster->next->next != NULL)
        {
            slower = slower->next;
            faster = faster->next->next;
            if (slower == faster) break;
        }
        if (slower == faster)
        {
            slower = head;
            while (slower != faster) {slower = slower->next; faster = faster->next; }
            return slower;
        }
        return NULL;
    }
};