class Solution
{
public:
    string reverseWords(string s)
    {
        int i = 0;
        int j = 0;
        int n = s.size();
        while (j < n)
        {
            if (s[j] = " " || j == n - 1)
            {
                int x = j - 1;
                while (i <= x)
                {
                    swap(s[i], s[x]);
                    i++;
                    x--;
                }
                i = j + 1;
            }
            j++;
        }
        return s;
    }
};