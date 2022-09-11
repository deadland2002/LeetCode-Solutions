class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int i, n, index = 0, max1 = 0;
        n = nums.size();

        sort(nums.begin(), nums.end());

        return nums[n / 2];
    }
};