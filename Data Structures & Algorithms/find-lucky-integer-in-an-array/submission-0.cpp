class Solution
{
public:
    int findLucky(vector<int> &arr)
    {
        map<int, int> mp;
        for (auto i: arr)
        {
            mp[i]++;
        }
        for (auto it = mp.rbegin(); it != mp.rend(); ++it)
        {
            if (it->first == it->second) return it->first;
        }
        return -1;
    }
};
