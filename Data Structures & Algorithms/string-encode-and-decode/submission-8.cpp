class Solution
{
public:
    string encode(vector<string> &strs)
    {
        string res = "";
        for (auto str: strs)
        {
            res += str + "|.";
        }
        return res;
    }

    vector<string> decode(string s)
    {
        vector<string> res;
        string letter = "";
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '|' && s[i + 1] == '.')
            {
                res.push_back(letter);
                letter = "";
                i++;
            }
            else
            {
                                letter += s[i];
            }
        }

        return res;
    }
};