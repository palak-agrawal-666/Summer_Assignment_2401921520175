class Solution
{
public:
    bool checkInclusion(string s1, string s2)
    {
        int n1 = s1.size();
        int n2 = s2.size();
        if (n1 > n2)
            return false;
        vector<int> f1(26, 0);
        for (char c1 : s1)
        {
            f1[c1 - 'a']++;
        }
        vector<int> f2(26, 0);
        int i = 0, j = 0;
        while (j < n2)
        {
            f2[s2[j] - 'a']++;
            if (j - i + 1 > n1)
            {
                f2[s2[i] - 'a']--;
                i++;
            }
            if (f1 == f2)
            {
                return true;
            }
            j++;
        }

        return false;
    }
};