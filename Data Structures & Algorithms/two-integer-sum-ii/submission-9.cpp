class Solution
{
    // hashMap using O(n) space
public:
    vector<int> twoSum(vector<int> &numbers, int target)
    {
        unordered_map<int, int> dict;
        for (int i = 0; i < numbers.size(); i++)
        {
            if (dict.find(target - numbers[i]) != dict.end())
            {
                return vector<int>{dict[target - numbers[i]] + 1, i + 1};
            }
            dict[numbers[i]] = i;
        }

        return vector<int>{};
    }
};