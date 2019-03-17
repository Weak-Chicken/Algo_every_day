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
    ListNode* reverseBetween(ListNode* head, int m, int n) 
    {
        if (head == NULL || head->next == NULL) return head;
        ListNode *res = new ListNode(-1);
        ListNode *true_res = res; res->next = head;
        while (m > 1) {res = res->next; m--; n--;}
        ListNode *begin_node = res;
        res = res->next;
        ListNode *last = res;
        res = res->next;
        while (n > 1) 
        {
            ListNode *temp = res->next;
            res->next = last;
            last = res;
            res = temp;
            n--;
        }
        begin_node->next->next = res;
        begin_node->next = last;
        return true_res->next;
    }
};