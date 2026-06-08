class Solution
{
public:
    int firstUniqChar(string s)
    {
        vector<int> checker(26, 0);
        for (char ch : s)
        {
            checker[ch - 'a']++;
        }
        for (int i = 0; i < s.size(); i++)
        {
            if (checker[s[i] - 'a'] == 1)
                return i;
        }
        return -1;
    }
};