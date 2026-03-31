class Solution
{
public:
    int numUniqueEmails(vector<string> &emails)
    {
        unordered_set<string> s;
        for (auto email: emails)
        {
            stringstream ss;
            int atIndex = 0;
            for (int i = 0; i < email.length(); ++i)
            {
                if (email[i] == '@')
                {
                    atIndex = i;
                    break;
                }
            }
            auto local = email.substr(0, atIndex);
            auto domain = email.substr(atIndex + 1);
            for (auto c: local)
            {
                if (isalpha(c)) ss << c;
                else if (c == '+') break;
            }
            ss << domain;
            s.emplace(ss.str());
        }

        return s.size();
    }
};