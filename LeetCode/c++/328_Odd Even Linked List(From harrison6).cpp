/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
/*
Solution from harrison6 on https://leetcode.com/problems/odd-even-linked-list/discuss/78079/Simple-O(N)-time-O(1)-space-Java-solution.
*/
class Solution 
{
public:
    ListNode* oddEvenList(ListNode* head) 
    {
        if (head == NULL || head->next == NULL) return head;
        ListNode *odd = head, *even = head->next, *evenpoint = head->next;
        while (even != NULL && even->next != NULL)
        {
            odd->next = odd->next->next;
            even->next = even->next->next;
            odd = odd->next;
            even = even->next;
        }
        odd->next = evenpoint;
        return head;
    }
};