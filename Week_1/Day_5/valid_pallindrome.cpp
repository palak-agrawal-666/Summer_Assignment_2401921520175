class Solution
{
public:
    bool isPalindrome(string s)
    {
        string store = "";
        for (char c : s)
        {
            if (c >= 'a' && c <= 'z')
                store.push_back(c);
            if (c >= 'A' && c <= 'Z')
                store.push_back(c + 32);
            if (c >= '0' && c <= '9')
                store.push_back(c);
        }
        int i = 0, j = store.size() - 1;
        while (i <= j)
        {
            if (store[i] != store[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
};