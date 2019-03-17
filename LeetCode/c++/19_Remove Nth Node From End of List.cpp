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
private:
    ListNode* wahaha(ListNode* head, int& n)
    {
        if (head->next == NULL) return (n == 1) ? NULL : head;
        head->next = wahaha(head->next, n);
        n--;
        if (n == 0 && head->next != NULL) head->next = head->next->next;
        return head;
    }
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        if (head == NULL) return head;
        ListNode *dummy = new ListNode(-1);
        dummy->next = head;
        return wahaha(dummy, n)->next;
    }
};