class Solution
{
public:
    int countConsistentStrings(string allowed, vector<string> &words)
    {
        unordered_set<char> allowedSet(allowed.begin(), allowed.end());
        int count = 0;
        for (auto w: words)
        {
            bool found = true;
            for (auto c: w)
            {
                if (allowedSet.find(c) == allowedSet.end())
                {
                    found = false;
                    break;
                }
            }
            if (found) count++;
        }
        
        return count;
    }
};