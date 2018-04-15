// Inspired by wfxr on leetcode discussion. ref: https://leetcode.com/problems/roman-to-integer/discuss/6547/Clean-O(n)-c++-solution

class Solution 
{
public:
    int romanToInt(string s) 
    {
        if (s.empty()) return 0;
        int roman[26] = {};
        
        roman['I' - 'A'] = 1;
        roman['V' - 'A'] = 5;
        roman['X' - 'A'] = 10;
        roman['L' - 'A'] = 50;
        roman['C' - 'A'] = 100;
        roman['D' - 'A'] = 500;
        roman['M' - 'A'] = 1000;        
        
        int result = 0;
        int next = roman[s.front() - 'A'];
        int curr = 0;
        for (int i = 1; i < s.length(); i++)
        {
            curr = next;
            next = roman[s[i] - 'A'];
            
            (curr < next) ? result -= curr : result += curr;
        }
        result += next;
        return result;
    }
};