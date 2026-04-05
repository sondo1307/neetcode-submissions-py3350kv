class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        if(nums.size() == 1) return;
        int p1 = 0;
        int p2 = p1+1;
        while (p1 < nums.size() || p2 < nums.size())
        {
            if (nums[p1] == 0)
            {
            while(nums[p1] == 0 && nums[p2] == 0)
            {
                p2++;
                if (p2 >= nums.size()) return;
            }
            int t = nums[p1];
            nums[p1] = nums[p2];
            nums[p2] = t;
            }
            p1++;
            p2 = p1 +1;
        }
    }
};