class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        string res = "";
        bool flag = false;
        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (isspace(s[i]))
            {
                if (flag) break;
                continue;
            }
            flag = true;
            res.insert(0, 1, s[i]);
        }

        return res.length();
    }
};
