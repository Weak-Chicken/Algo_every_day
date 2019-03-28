class Solution 
{
public:
    vector<int> sortArrayByParity(vector<int>& A) 
    {
        vector<int> odd, even;
        for (int i = 0; i < A.size(); i++) (A[i] & 2 != 0) ? even.push_back(A[i]) : odd.push_back(A[i]);
        even.insert(even.begin(), odd.begin(), odd.end());
        return even;
    }
};