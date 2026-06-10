class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        int hs = haystack.size();
        int ns = needle.size();
        if (ns > hs)
            return -1;

        int i = 0, j = 0;
        string cmp = "";
        while (j < hs)
        {
            cmp += haystack[j];
            if (cmp.size() > ns)
            {
                cmp.erase(0, 1);
                i++;
            }
            if (cmp == needle)
            {
                return i;
            }
            j++;
        }
        return -1;
    }
};