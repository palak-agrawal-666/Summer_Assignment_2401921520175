class Solution
{
public:
    bool canConstruct(string ransomNote, string magazine)
    {
        if (ransomNote.size() > magazine.size())
            return false;
        vector<int> checker(26, 0);
        for (char ch : magazine)
        {
            checker[ch - 'a']++;
        }
        for (char c : ransomNote)
        {
            checker[c - 'a']--;
            if (checker[c - 'a'] < 0)
                return false;
        }
        return true;
    }
};