/*
Solution from JPV on https://leetcode.com/problems/squares-of-a-sorted-array/discuss/222278/Java-3-lines-O(n)-time
*/
class Solution 
{
public:
    vector<int> sortedSquares(vector<int>& A) 
    {
        vector<int> res(A.size(), 0);
        for (int i = A.size() - 1, l = 0, r = A.size() - 1; i >= 0; i--)
        {
            res[i] = (-A[l] > A[r]) ? A[l] * A[l++] : A[r] * A[r--];
        }
        return res;
    }
};