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
    ListNode* swapPairs(ListNode* head) 
    {
        if (head == NULL || head->next == NULL) return head;
        ListNode *res = new ListNode(-1);
        res->next = head;
        ListNode *pre = res;
        while (head != NULL && head->next != NULL)
        {
            ListNode *temp = head->next->next;
            head->next->next = head;
            pre->next = head->next;
            head->next = temp;
            pre = head;
            head = temp;
        }
        return res->next;
    }
};