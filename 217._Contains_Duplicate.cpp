class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        map<int, int> m;
        int i, n;
        n = nums.size();
        for (i = 0; i < n; i++)
        {
            m[nums[i]]++;
        }
        for (auto k : m)
        {
            if (k.second >= 2)
            {
                return true;
                break;
            }
        }
        return false;
    }
};