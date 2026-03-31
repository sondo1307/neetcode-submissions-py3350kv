class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size()-1;
        if(target > nums[r]) return nums.size();
        if(target < nums[l]) return 0;

        while (l<= r)
        {
            int m = (l + r) / 2;
            if (nums[m] < target)
            {
                l = m +1;
            }
            else if (nums[m] > target)
            {
                r = m -1;
            }
            else return m;
        }

        if (target > nums[l] && target < nums[r])
        {
            return l;
        }
    }
};
