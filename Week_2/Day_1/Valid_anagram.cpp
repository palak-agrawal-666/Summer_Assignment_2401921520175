class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        int ss = s.size();
        int ts = t.size();
        if (ss != ts)
            return false;
        vector<int> checker(26, 0);
        for (int i = 0; i < ss; i++)
        {
            checker[s[i] - 'a']++;
            checker[t[i] - 'a']--;
        }
        for (int i = 0; i < 26; i++)
        {
            if (checker[i] != 0)
                return false;
        }
        return true;
    }
};