class Solution 
{
public:
    vector<int> twoSum(vector<int>& numbers, int target) 
    {
        vector<int> result;
        if (numbers.empty()) return result;
        
        for (int i = 0; i < numbers.size(); i++)
        {
            int newtarget = target - numbers[i];
            for (int j = numbers.size() - 1; j >= 0; j--)
            {
                if (newtarget == numbers[j])
                {
                    result.push_back(i + 1);
                    result.push_back(j + 1);
                    return result;
                }
                if (newtarget > numbers[j]) break;
                while ((j >= 0) && numbers[j - 1] == numbers[j]) j--;
            }
            while ((i < numbers.size()) && numbers[i + 1] == numbers[i]) i++;
        }
    }
};