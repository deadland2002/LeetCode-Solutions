class Solution
{
public:
    bool containsNearbyDuplicate(vector<int> &nums, int k)
    {
        int i, n, val = 0;
        map<int, int> m;
        n = nums.size();
        for (i = 0; i < n; i++)
        {
            val = m[nums[i]];
            if (val >= 1 && abs(i - val + 1) <= k)
            {
                cout << i << " " << val << "\n";
                return true;
            }

            m[nums[i]] = i + 1;
        }
        return false;
    }
};