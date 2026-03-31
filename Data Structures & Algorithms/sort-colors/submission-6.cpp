class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int arr[3] = {};
        for (int num: nums)
        {
            arr[num]++;
        }

        int k = 0;
        for (int i = 0; i < 3; i++)
        {
            while (arr[i]-- > 0)
            {
                nums[k++] = i;
            }
        }
    }
};