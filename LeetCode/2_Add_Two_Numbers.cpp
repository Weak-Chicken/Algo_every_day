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
        bool ten = false;
        ListNode* res = l1;
        while (l1->next != NULL && l2->next != NULL)
        {
            if (ten)
            {
                l1->val++;
                ten = false;
            }
            l1->val += l2->val;
            if (l1->val >= 10)
            {
                l1->val -= 10;
                ten = true;
            }
            l1 = l1->next;
            l2 = l2->next;
        }
        if (l1->next == NULL)
        {
            l1->next = l2->next;
        }
        l1->val += l2->val;
        while (l1->next != NULL)
        {
            if (ten)
            {
                l1->val++;
                ten = false;
            }
            if (l1->val >= 10)
            {
                l1->val -= 10;
                ten = true;
            }
            l1 = l1->next;
        }
        if (ten)
        {
            l1->val++;
            ten = false;
        }
        if (l1->val >= 10)
        {
            l1->val -= 10;
            ten = true;
        }
        if (ten)
        {
            ListNode *temp = new ListNode(1);
            l1->next = temp;
        }

        return res;
    }
};