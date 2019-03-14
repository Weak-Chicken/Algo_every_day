/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
/*
Solution from wen587sort on https://leetcode.com/problems/remove-duplicates-from-sorted-list/discuss/28625/3-Line-JAVA-recursive-solution
*/
class Solution 
{
public:
    ListNode* deleteDuplicates(ListNode* head)
    {
        if (head == NULL || head->next == NULL) return head;
        head->next = deleteDuplicates(head->next);
        return (head->val == head->next->val) ? head->next : head;
    }
};