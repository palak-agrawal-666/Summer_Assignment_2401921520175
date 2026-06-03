class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int i = 0;
        int j = 0;
        while (i < nums.size())
        {
            if (nums[i] != 0)
            {
                int temp = nums[j];
                nums[j] = nums[i];
                nums[i] = temp;
                j++;
            }
            i++;
        }
    }
};
