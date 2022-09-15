class Solution
{
public:
    vector<int> getSumAbsoluteDifferences(vector<int> &nums)
    {
        vector<int> result(nums.size(), 0);
        for (int i = 0; i < nums.size(); ++i)
            result[0] += nums[i] - nums[0];

        for (int i = 1; i < nums.size(); i++)
        {
            int j = (nums.size() - i);
            result[i] += result[i - 1] +
                         i * (nums[i] - nums[i - 1]) - j * (nums[i] - nums[i - 1]);
        }

        return result;
    }
};