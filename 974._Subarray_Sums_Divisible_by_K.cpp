class Solution
{
public:
    int subarraysDivByK(vector<int> &nums, int k)
    {
        int sum = 0, i, n, ans = 0;
        vector<int> vec;
        map<int, int> m;
        n = nums.size();

        for (i = 0; i < n; i++)
        {
            sum += nums[i];
            vec.push_back(sum);

            vec[i] = vec[i] % k;
            if (vec[i] < 0)
                vec[i] = k + vec[i];

            m[vec[i]]++;
        }

        for (auto j : m)
        {
            if (j.first != 0)
                ans += ((j.second) * (j.second - 1)) / 2;
            else if (j.first == 0 || (k % 2 == 0 && j.first == k / 2))
                ans += ((j.second) * (j.second + 1)) / 2;
        }

        return ans;
    }
};