class Solution
{
public:
    vector<int> sortArrayByParity(vector<int> &nums)
    {
        int eP = 0;
        int findingEven = 1;
        while (eP < (nums.size() + 2 - 1) / 2 && findingEven < nums.size())
        {
            if (nums[eP] & 1)
            {
                while (nums[findingEven] & 1)
                {
                    findingEven++;
            if (findingEven >= nums.size()) return nums;
                }
                swap(nums[eP], nums[findingEven]);
            }
            eP++;
            findingEven = eP + 1;
        }

        return nums;
    }
};