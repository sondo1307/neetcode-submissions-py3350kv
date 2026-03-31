class Solution
{
public:
    int countSeniors(vector<string> &details)
    {
        int res = 0;
        for (auto s: details)
        {
            auto sub = s.substr(15 - 1 - 3, 2);
            if (stoi(sub) > 60) res++;
        }
        return res;
    }
};