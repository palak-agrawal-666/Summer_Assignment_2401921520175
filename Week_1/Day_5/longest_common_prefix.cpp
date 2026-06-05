class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        sort(strs.begin(), strs.end());
        string ans = "";
        string fst = strs[0];
        string lst = strs.back();
        for (int i = 0; i < fst.length(); i++)
        {
            if (fst[i] == lst[i])
            {
                ans.push_back(fst[i]);
            }
            else
            {
                break;
            }
        }
        return ans;
    }
};