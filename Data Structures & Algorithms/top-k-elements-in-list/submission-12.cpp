class Solution
{
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        unordered_map<int, int> mp;
        for (auto i: nums)
        {
            mp[i]++;
        }
        vector<stack<int> > freq(1000);
        for (auto p: mp)
        {
            freq[p.second].push(p.first);
        }

        vector<int> res;
        for (int i = 1000 - 1; i >= 0; --i)
        {
            while (freq[i].size() > 0)
            {
                res.push_back(freq[i].top());
                freq[i].pop();
                k--;
                if (k == 0)
                {
                    return res;
                }
            }
        }

        return res;
    }
};