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
    ListNode* deleteDuplicates(ListNode* head) 
    {
        if (head == NULL || head->next == NULL) return head;
        ListNode* res = head; 
        ListNode* last_node = head;
        head = head->next;
        while (head != NULL)
        {
            if (head->val == last_node->val)
            {
                head = head->next;
            }
            else
            {
                last_node->next = head;
                last_node = head;
                head = head->next;
            }
        }
        last_node->next = NULL;
        return res;
    }
};