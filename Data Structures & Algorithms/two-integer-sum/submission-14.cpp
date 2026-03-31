class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> dict;

        for (int i = 0; i < nums.size(); ++i)
        {
            int sub = target - nums[i];
            if (dict.find(sub) != dict.end()) return vector<int>{dict[sub], i};
            dict.emplace(nums[i], i);
        }
    }
};
