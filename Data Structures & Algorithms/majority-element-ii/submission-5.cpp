class Solution
{
public:
    vector<int> majorityElement(vector<int> &nums)
    {
        int m1 = nums[0];
        int m2 = nums[1];
        int c1 = 0;
        int c2 = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == m1)
            {
                c1++;
            }
            else if (nums[i] == m2)
            {
                c2++;
            }
            else if (c1 == 0)
            {
                m1 = nums[i];
                c1++;
            }
            else if (c2 == 0)
            {
                m2 = nums[i];
                c2++;
            }
            else
            {
                c1--;
                c2--;
            }
        }

        c1 = c2 = 0;
        for (int num: nums)
        {
            if (num == m1) c1++;
            else if (num == m2) c2++;
        }

        vector<int> res;
        if (c1 > nums.size() / 3) res.push_back(m1);
        if (c2 > nums.size() / 3) res.push_back(m2);

        return res;
    }
};