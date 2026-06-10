class Solution
{
public:
    bool isSubsequence(string s, string t)
    {
        int ss = s.size();
        int ts = t.size();
        if (ss > ts)
            return false;
        if (s == "")
            return true;
        int i = 0;
        int j = 0;
        while (i < ss && j < ts)
        {

            if (s[i] == t[j])
            {
                i++;
            }
            if (i == ss)
                return true;
            j++;
        }
        return false;
    }
};