class Solution
{
public:
    bool containsNearbyDuplicate(vector<int> &nums, int k)
    {
        unordered_set<int> s;
        int p = 0;
        for (int i = 0; i <= k; i++)
        {
            if (s.find(nums[i]) != s.end())
            {
                return true;
            }
            s.insert(nums[i]);
        }
        for (int i = k + 1; i < nums.size(); i++)
        {
            s.erase(nums[p]);
            p = i - k;
            if (s.find(nums[i]) != s.end()) return true;
            s.insert(nums[i]);
        }

        return false;
    }
};
