class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> m;
        for (int i = 0; i < nums.size(); i++)
        {
            auto sub = target - nums[i];
            if (m.find(sub) != m.end()) return {m[sub], i};
            m.insert({nums[i], i});
        }

        return {};
    }
};