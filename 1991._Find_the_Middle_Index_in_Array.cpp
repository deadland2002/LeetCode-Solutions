class Solution
{
public:
    int findMiddleIndex(vector<int> &nums)
    {
        int t = 0, s = 0;
        for (auto val : nums)
            t += val;

        for (int i = 0; i < nums.size(); i++)
        {
            if (s == t - s - nums[i])
                return i;
            s += nums[i];
        }
        return -1;
    }
};