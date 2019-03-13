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
        if (l1 == NULL) return l2;
        if (l2 == NULL) return l1;
        ListNode* res;
        if (l1->val > l2->val)
        {
            res = l2;
            l2 = l2->next;
        }
        else
        {
            res = l1;
            l1 = l1->next;
        }
        ListNode* true_res = res;
        while (l1 != NULL && l2 != NULL)
        {
            if (l1->val > l2->val)
            {
                ListNode* temp = new ListNode(l2->val);
                res->next = temp;
                res = res->next;
                l2 = l2->next;
            }
            else
            {
                ListNode* temp = new ListNode(l1->val);
                res->next = temp;
                res = res->next;
                l1 = l1->next;
            }
        }
        if (l1 != NULL) res->next = l1;
        if (l2 != NULL) res->next = l2;
        return true_res;
    }
};