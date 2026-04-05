class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n);
        int l = 0, r = n - 1, resIndex = n - 1;

        while (l <= r) {
            if (abs(nums[l]) > abs(nums[r])) {
                res[resIndex] = nums[l] * nums[l];
                l++;
            } else {
                res[resIndex] = nums[r] * nums[r];
                r--;
            }
            resIndex--;
        }

        return res;
    }
};