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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        ListNode *res = l1; int plus_one = 0;
        while (l1->next != NULL && l2->next != NULL)
        {
            l1->val = plus_one + l1->val + l2->val;
            plus_one = (l1->val >= 10) ? 1 : 0;
            if (l1->val >= 10) l1->val -= 10;
            l1 = l1->next;
            l2 = l2->next;
        }
        l1->val = plus_one + l1->val + l2->val;
        plus_one = (l1->val >= 10) ? 1 : 0;
        if (l1->val >= 10) l1->val -= 10;
        if (l2->next != NULL) l1->next = l2->next;
        while (plus_one == 1)
        {
            if (l1->next == NULL) 
            {
                l1->next = new ListNode(1);
            }
            else
            {
                l1->next->val++;
            }
            plus_one = (l1->next->val >= 10) ? 1 : 0;
            if (l1->next->val >= 10) l1->next->val -= 10;
            l1 = l1->next;
        }
        return res;
    }
};