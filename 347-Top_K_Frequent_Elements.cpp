class Solution
{
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {

        unordered_map<int, int> map1;

        for (auto &i : nums)
        {
            ++map1[i];
        }

        vector<pair<int, int>> p;

        for (auto it = map1.begin(); it != map1.end(); ++it)
        {
            p.emplace_back(-(it->second), it->first);
        }

        sort(p.begin(), p.end());

        vector<int> result;

        for (int i = 0; i < k; ++i)
        {
            result.emplace_back(p[i].second);
        }

        return result;
    }
};