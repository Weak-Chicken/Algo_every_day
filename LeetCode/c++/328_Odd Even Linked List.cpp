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
    ListNode* oddEvenList(ListNode* head) 
    {
        ListNode *fast = head, *slow = head, *boundary, *temp;
        if (head == NULL || head->next == NULL) return head;
        while (fast->next != NULL && fast->next->next != NULL) fast = fast->next->next;
        if (fast->next == NULL)
        {
            boundary = fast;
            while (slow->next && slow->next->next != NULL)
            {
                if (slow == boundary || slow->next == boundary) return head;
                fast->next = slow->next;
                slow->next = slow->next->next;
                fast->next->next = NULL;
                fast = fast->next;
                slow = slow->next;
            }
        }
        else
        {
            fast = fast->next;
            boundary = fast;
            while (slow->next && slow->next->next != NULL)
            {
                if (slow->next == boundary)
                {
                    fast->next = slow->next;
                    slow->next = slow->next->next;
                    fast->next->next = NULL;
                    fast = fast->next;
                    slow = slow->next;
                    return head;
                }
                fast->next = slow->next;
                slow->next = slow->next->next;
                fast->next->next = NULL;
                fast = fast->next;
                slow = slow->next;
            }
        }
        return head;
    }
};