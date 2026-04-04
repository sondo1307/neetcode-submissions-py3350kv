class Solution
{
public:
    bool wordPattern(string pattern, string s)
    {
        stringstream ss(s);
        vector<string> v;
        while (ss >> s)
        {
            v.push_back(s);
        }
        if (v.size() != pattern.size()) return false;

        unordered_map<char, string> m1;
        unordered_map<string, char> m2;
        for (int i = 0; i < v.size(); i++)
        {
            if (m1.find(pattern[i]) != m1.end() && m1[pattern[i]] != v[i])
            {
                cout << m1[pattern[i]] << "+" << v[i] << endl;
                return false;
            }
            if (m2.find(v[i]) != m2.end() && m2[v[i]] != pattern[i])
            {
                cout << m2[v[i]] << "+" << pattern[i] << endl;
                return false;
            }
            m1[pattern[i]] = v[i];
            m2[v[i]] = pattern[i];
        }

        return true;
    }
};