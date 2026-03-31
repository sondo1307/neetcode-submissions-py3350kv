class Solution
{
public:
    vector<int> getConcatenation(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> concat(n * 2);
        for (int i = 0; i < n; i++)
        {
            concat[i] = concat[i + n] = nums[i];
        }
        
        return concat;
    }
};