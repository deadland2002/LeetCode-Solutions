class Solution
{
public:
    int numSubarraysWithSum(vector<int> &nums, int goal)
    {
        return atMost(nums, goal) - atMost(nums, goal - 1);
    }

private:
    int atMost(vector<int> &nums, int goal)
    {
        int res = 0;
        int slowIndex = 0;
        for (int fastIndex = 0; fastIndex < nums.size(); ++fastIndex)
        {
            if (goal < 0)
                return 0;
            goal -= nums[fastIndex];
            while (goal < 0)
            {
                goal += nums[slowIndex++];
            }
            res += fastIndex - slowIndex + 1;
        }
        return res;
    }
};