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
    ListNode* rotateRight(ListNode* head, int k) 
    {
        if (head == NULL || head->next == NULL || k == 0) return head;
        ListNode *front = head, *back = head, *copy = head, *temp;
        int size = 1;
        while (k > 0)
        {
            while (front->next != NULL)
            {
                size++;
                front = front->next;
                if (--k < 0) back = back->next;
            }
            k--;
            k = k % size;
            if (k > 0) front = copy;
            if (k == 0) return copy;
        }
        temp = back->next;
        back->next = NULL;
        back = temp;
        while (back->next != NULL)
        {
            back = back->next;
        }
        back->next = copy;
        return temp;
    }
};