class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int ans = INT_MIN;
        int i = 0, j = height.size() - 1;
        int area = 0;
        while (i < j)
        {
            int base = j - i;
            if (height[i] > height[j])
            {
                area = base * height[j];
                j--;
            }
            else
            {
                area = base * height[i];
                i++;
            }
            ans = max(ans, area);
        }
        return ans;
    }
};