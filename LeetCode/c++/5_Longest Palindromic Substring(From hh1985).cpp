/*
Solution from hh1985 on https://leetcode.com/problems/longest-palindromic-substring/discuss/2923/Simple-C%2B%2B-solution-(8ms-13-lines)
*/
class Solution 
{
public:
    string longestPalindrome(string s) 
    {
        if (s.size() <= 1) return s;
        int next = 0, p_l, p_r, start_pos = 0, max_length = 0;
        while (next < s.size())
        {
            if (s.size() - next <= max_length / 2) break;
            p_l = next; p_r = next;
            while (p_r < s.size() - 1 && s[p_r] == s[p_r + 1]) p_r++;
            next = p_r + 1;
            while (p_r < s.size() - 1 && p_l > 0 && s[p_r + 1] == s[p_l - 1]) {p_r++; p_l--; };
            if ((p_r + 1 - p_l) > max_length){max_length = p_r + 1 - p_l; start_pos = p_l; }
        }
        return s.substr(start_pos, max_length);
    }
};