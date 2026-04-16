class Solution
{
public:
    int calculate(string s)
    {
        vector<string> v;
        string temp = "";
        for (int i = 0; i < s.length() + 1; i++)
        {
            if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || i >= s.length())
            {
                if (v.size() <= 0 || *v.rbegin() == "+" || *v.rbegin() == "-")
                {
                    v.push_back(temp);
                    v.push_back(string(1, s[i]));
                }
                else
                {
                    auto numberTemp = stoi(temp);
                    string topKey = *v.rbegin();
                    v.pop_back();
                    int topVal = stoi(*v.rbegin());
                    v.pop_back();
                    if (topKey == "*")
                    {
                        numberTemp = topVal * numberTemp;
                    }
                    else
                    {
                        numberTemp = topVal / numberTemp;
                    }
                    v.push_back(to_string(numberTemp));
                    v.push_back(string(1, s[i]));
                }
                temp = "";
            }
            else
            {
                temp += s[i];
            }
        }

        int res = stoi(v[0]);
        for (int i = 1; i < v.size()-1; ++i)
        {
            if (v[i] == "+")
            {
                res += stoi(v[i + 1]);
            }
            else if (v[i] == "-")
            {
                res -= stoi(v[i + 1]);
            }
        }

        return res;
    }
};