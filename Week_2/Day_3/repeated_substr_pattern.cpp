class Solution
{
public:
    bool repeatedSubstringPattern(string s)
    {
        int n = s.size();
        for (int i = 1; i <= n / 2; i++)
        {
            string newStr = s.substr(0, i);
            string tester = "";
            for (int j = 0; j < n / i; j++)
            {
                tester += newStr;
            }
            if (tester == s)
            {
                return true;
            }
        }
        return false;
    }
};