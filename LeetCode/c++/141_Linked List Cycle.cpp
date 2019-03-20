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
    bool hasCycle(ListNode *head) 
    {
        if (head == NULL || head->next == NULL) return false;
        int counter = 0, limit = 9000;
        while (head->next != NULL)
        {
            head = head->next;
            counter++;
            if (counter >= limit) return true;
        }
        return false;
    }
};