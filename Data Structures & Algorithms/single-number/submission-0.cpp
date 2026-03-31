class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        unordered_set<int> s;
        for (auto i : nums)
        {
            if (s.find(i) == s.end())
            {
                s.insert(i);
            }
            else
            {
                s.erase(i);
            }
        }

        return *s.begin();
    }
};