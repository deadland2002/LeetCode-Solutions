class Solution
{
public:
    bool check(vector<int> &nums)
    {
        int n, i, min1 = 999999, index = 0;
        n = nums.size();

        for (i = 0; i < n; i++)
        {
            if (nums[i] > nums[(i + 1) % n] && ++index > 1)
                return false;
        }
        return true;
    }
};