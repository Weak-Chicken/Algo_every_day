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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) 
    {
        ListNode* B_copy = headB;
        if (headA == NULL || headB == NULL) return NULL;
        while (headA != NULL)
        {
            while (headB !=NULL)
            {
                if (headA == headB) return headA;
                headB = headB->next;
            }
            headA = headA->next;
            headB = B_copy;
        }
        return NULL;
    }
};