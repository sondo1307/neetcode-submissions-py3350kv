class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        vector<int> arr(nums.size());
                fill(arr.begin(), arr.end(), 1);
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = 0; j < i; j++)
            {
                arr[i] *= nums[j];
                cout << nums[j] << endl;
                cout << arr[i] << endl;
            }
            for (int j = i + 1; j < nums.size(); j++)
            {
                arr[i] *= nums[j];
                cout << nums[j] << endl;
                cout << arr[i] << endl;
            }
        }

        for (auto arr1: arr)
        {
            cout << arr1 << endl;
        }

        return arr;
    }
};
