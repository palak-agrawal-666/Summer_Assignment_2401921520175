class Solution
{
public:
    vector<int> findAnagrams(string s, string p)
    {
        vector<int> ans;
        vector<int> pf(26, 0);
        for (char c : p)
        {
            pf[c - 'a']++;
        }
        vector<int> sf(26, 0);
        int l = 0, r = 0;
        while (r < s.size())
        {
            sf[s[r] - 'a']++;
            if (r - l + 1 > p.size())
            {
                sf[s[l] - 'a']--;
                l++;
            }
            if (sf == pf)
            {
                ans.push_back(l);
            }
            r++;
        }
        return ans;
    }
};