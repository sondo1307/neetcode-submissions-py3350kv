class Solution
{
public:
    vector<int> sortArrayByParity(vector<int> &nums)
    {
        vector<int> even;
        vector<int> odd;
        for (auto i: nums)
        {
            if (i & 1) odd.push_back(i);
            else even.push_back(i);
        }

        int index = 0;
        for (int i: even)
        {
            nums[index++] = i;
        }
        for (int i: odd)
        {
            nums[index++] = i;
        }

        return nums;
    }
};