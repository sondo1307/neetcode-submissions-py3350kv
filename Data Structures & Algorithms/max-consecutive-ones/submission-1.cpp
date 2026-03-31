class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {
        int count = 0;
        int max = 0;
        for (auto i: nums)
        {
            if (i == 1)
            {
                count++;
            }
            else if (i == 0)
            {
                max = max > count ? max : count;
                count = 0;
            }
        }
        
        return count > max ? count : max;
    }
};