class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int missing = 0;
        int i = 0;
        sort (nums.begin(), nums.end());
        while (true)
        {
            if (missing == nums[i])
            {
                missing++;
                i++;
            }
            else
            {
                return missing;
            }
        }
    }
};