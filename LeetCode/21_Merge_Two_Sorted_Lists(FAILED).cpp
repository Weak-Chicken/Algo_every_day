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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2)
    {
        if (l1 == NULL || l2 == NULL)
        {
            if (l1 == NULL && l2 == NULL)
            {
                return NULL;
            }
            else if (l1 == NULL)
            {
                return l2;
            }
            else if (l2 == NULL)
            {
                return l1;
            }
        }
        
        ListNode* result = l1;
        ListNode* next_l1;
        ListNode* next_l2;
        while (l1->next != NULL && l2->next != NULL)
        {
            next_l1 = l1->next;
            next_l2 = l2->next;
            
            if (l1->val <= l2->val)
            {
                l1->next = l2;
                l1 = l2;
            }
            else
            {
                l2->next = l1;
            }
            
            next_l1->val <= next_l2->val ? l1->next = next_l1 : l1->next = next_l2;
            
            l1 = next_l1;
            l2 = next_l2;
        }
        
        if (l1->next == NULL)
        {
            l1->next = l2;
        }
        
        return result;
    }
};