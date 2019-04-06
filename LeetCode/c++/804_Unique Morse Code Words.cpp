class Solution 
{
public:
    int uniqueMorseRepresentations(vector<string>& words) 
    {
        string morse[26] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."
};
        unordered_set<string> my_words;
        for (int i = 0; i < words.size(); i++)
        {
            string temp;
            for (int j = 0; j < words[i].size(); j++) temp += morse[words[i][j] - 97];
            my_words.insert(temp);
        }
        return my_words.size();
    }
};