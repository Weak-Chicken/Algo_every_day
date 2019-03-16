/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
/*
Solution from dong.wang.1694 on https://leetcode.com/problems/intersection-of-two-linked-lists/discuss/49799/Simple-C%2B%2B-solution-(5-lines)
*/
class Solution 
{
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) 
    {
        ListNode *curA = headA, *curB = headB;
        while (curA != curB)
        {
            curA = (curA) ? curA->next : headB;
            curB = (curB) ? curB->next : headA;
        }
        return curA;
    }
};