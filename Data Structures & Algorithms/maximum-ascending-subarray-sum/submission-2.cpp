class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int m = 0;
        int count = nums[0];
        for (int i = 1; i<nums.size(); i++)
        {
            if (nums[i-1] < nums[i])
            {
                count += nums[i];
            }
            else
            {
                m = max(m, count);
                count = nums[i];
            }
        }
                m = max(m, count);

        return m;
    }
};