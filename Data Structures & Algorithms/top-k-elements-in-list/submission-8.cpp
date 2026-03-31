class Solution
{
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        unordered_map<int, int> map;
        vector<vector<int> > arr(nums.size() + 1);
        for (int num: nums)
        {
            map[num]++;
        }
        for (auto const &it: map)
        {
            arr[it.second].push_back(it.first);
        }
        vector<int> res;
        for (int i = arr.size() - 1; i >= 0; i--)
        {
            if (arr[i].size() > 0)
            {
                for (int j: arr[i])
                {
                    res.push_back(j);
                    if (res.size() == k) return res;
                }
            }
        }

        return res;
    }
};