class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        vector<int> arr(nums.size());
        fill(arr.begin(), arr.end(), 1);
        for (int i = 1; i < nums.size(); i++)
        {
            arr[i] = arr[i] * arr[i - 1] * nums[i - 1];
        }
        int prefix = 1;
        for (int i = nums.size() - 2; i >= 0; i--)
        {
            prefix *= nums[i + 1];
            arr[i] *= prefix;
        }

        return arr;
    }
};