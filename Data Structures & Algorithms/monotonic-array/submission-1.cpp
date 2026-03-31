class Solution
{
public:
    bool isMonotonic(vector<int> &nums)
    {
        int t = 0;
        for (int i = 1; i < nums.size(); i++)
        {
            auto lastT = t;
            auto a = nums[i] - nums[i - 1];
            if(a!= 0) t = nums[i] - nums[i - 1];
            if (t != 0 && lastT * t < 0) return false;
        }

        return true;
    }
};