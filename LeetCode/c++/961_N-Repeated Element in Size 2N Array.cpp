class Solution 
{
public:
    int repeatedNTimes(vector<int>& A) 
    {
        if (A.empty()) return 0;
        sort(A.begin(), A.end());
        return (A[A.size() / 2] == A[A.size() / 2 + 1]) ? A[A.size() / 2] : A[A.size() / 2 - 1];
    }
};