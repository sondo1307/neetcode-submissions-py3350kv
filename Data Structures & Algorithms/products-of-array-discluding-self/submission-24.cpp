class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        int arr[nums.size()];
        for (int i = 0; i < nums.size(); ++i)
        {
            arr[i] = 1;
        }
        int prefix = 1;
        for (int i = 0; i < nums.size(); i++)
        {
            arr[i] = arr[i] * prefix;
            prefix *= nums[i];
        }

        int postfix = 1;
        for (int i = nums.size() - 1; i >= 0; i--)
        {
            arr[i] = arr[i] * postfix;
            postfix *= nums[i];
        }

        vector<int> result(arr, arr + nums.size());
        return result;
    }
};
