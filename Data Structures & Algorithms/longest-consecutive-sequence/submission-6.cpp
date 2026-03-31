class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        unordered_set<int> hashset;
        vector<int> l;
        for (int num: nums)
        {
            hashset.insert(num);
        }
        int longest = 0;
        for (int num: hashset)
        {
            int len = 1;
            if (hashset.find(num - 1) == hashset.end())
            {
                while (hashset.find(num + len) != hashset.end())
                {
                    len++;
                }
                longest = max(longest, len);
            }
        }

        return longest;
    }
};