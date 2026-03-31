class Solution
{
public:
    bool containsNearbyDuplicate(vector<int> &nums, int k)
    {
        unordered_set<int> windows;

        int l = 0;
        for (int r = 0; r < nums.size(); ++r)
        {
            if (r-l>k)
            {
                windows.erase(nums[l]);
                l++;
            }
            if (windows.find(nums[r]) != windows.end()) return true;
            windows.insert(nums[r]);
        }

        return false;
    }
};