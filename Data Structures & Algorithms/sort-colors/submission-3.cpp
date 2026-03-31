class Solution {
public:
    void sortColors(vector<int>& nums) { // Đổi thành void
        int n = nums.size();
        if (n <= 1) return;

        int maxval = 0;
        for (int i = 0; i < n; i++)
            maxval = max(maxval, nums[i]);

        vector<int> cntArr(maxval + 1, 0);
        for (int i = 0; i < n; i++)
            cntArr[nums[i]]++;

        for (int i = 1; i <= maxval; i++)
            cntArr[i] += cntArr[i - 1];

        vector<int> ans(n);
        for (int i = n - 1; i >= 0; i--) {
            ans[cntArr[nums[i]] - 1] = nums[i];
            cntArr[nums[i]]--;
        }

        // QUAN TRỌNG: Cập nhật lại mảng gốc
        nums = ans; 
    }
};