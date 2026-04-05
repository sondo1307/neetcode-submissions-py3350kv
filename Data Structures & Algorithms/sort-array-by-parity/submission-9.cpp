class Solution
{
public:
    vector<int> sortArrayByParity(vector<int> &nums)
    {
        int eP = 0;
        int findingEven = 1;
        auto n = (nums.size() + 2 - 1) / 2;
        while (eP < (nums.size() + 2 - 1) / 2)
        {
            if (nums[eP] & 1)
            {
                while (nums[findingEven] & 1)
                {
                    findingEven++;
            if (findingEven >= nums.size()) return nums;
                }
                cout << "swap" << nums[eP] << " " << nums[findingEven] << endl;
                swap(nums[eP], nums[findingEven]);
            }
            eP++;
            findingEven = eP + 1;
        }

        for (int i: nums)
        {
            cout << i << endl;
        }
        return nums;
    }
};