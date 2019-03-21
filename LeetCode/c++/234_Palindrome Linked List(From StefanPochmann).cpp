/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
/*
Solution from StefanPochmann on https://leetcode.com/problems/palindrome-linked-list/discuss/64500/11-lines-12-with-restore-O(n)-time-O(1)-space
*/
class Solution 
{
public:
    bool isPalindrome(ListNode* head) 
    {
        if (head == NULL) return true;
        if (head->next == NULL) return true;
        
        ListNode *fast = head, *slow = head, *rev = NULL, *temp = NULL;
        while (fast->next != NULL && fast->next->next != NULL)
        {
            fast = fast->next->next;
            temp = rev;
            rev = slow;
            slow = slow->next;
            rev->next = temp;
        }
        if (fast->next != NULL)
        {
            temp = rev;
            rev = slow;
            slow = slow->next;
            rev->next = temp;
        }
        else
        {
            slow = slow->next;
        }
        while (slow != NULL)
        {
            if (rev == NULL || slow->val != rev->val) return false;
            slow = slow->next; rev = rev->next;
        }
        return (rev == NULL) ? true : false;
    }
};