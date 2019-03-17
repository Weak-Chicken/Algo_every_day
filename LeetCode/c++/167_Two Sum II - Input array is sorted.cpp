class Solution 
{
public:
    vector<int> twoSum(vector<int>& numbers, int target) 
    {
        vector<int> res;
        if (numbers.size() == 0) return res;
        int l = 0, r = numbers.size() - 1;
        while (l < r)
        {
            if (numbers[l] + numbers[r] < target)
            {
                l++;
            }
            else if (numbers[l] + numbers[r] > target)
            {
                r--;
            }
            else if (numbers[l] + numbers[r] == target)
            {
                res.push_back(++l);
                res.push_back(++r);
                return res;
            }
        }
        return res;
    }
};