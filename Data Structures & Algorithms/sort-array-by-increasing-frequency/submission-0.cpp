class Solution
{
public:
    vector<int> frequencySort(vector<int> &nums)
    {
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++)
        {
            mp[nums[i]]++;
        }

        vector<set<int> > bucket(100, set<int>());
        for (int i = 0; i < nums.size(); i++)
        {
            auto value = mp[nums[i]];
            auto key = nums[i];
            bucket[value].insert(key);
        }

        for (int i = 0; i < bucket.size(); i++)
        {
            cout << i << " : ";
            for (auto s: bucket[i])
            {
                cout << s << " ";
            }
            cout << endl;
        }

        vector<int> result;
        for (int i = 0; i < bucket.size(); i++)
        {
            while (bucket[i].size() > 0)
            {
                auto t = *bucket[i].rbegin();
                for (int j = 0; j < i; j++)
                {
                    result.push_back(t);
                }
                bucket[i].erase(t);
            }
        }

        for (int result1: result)
        {
            cout << result1 << " ";
        }

        return result;
    }
};