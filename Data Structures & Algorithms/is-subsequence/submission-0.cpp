class Solution
{
public:
    bool isSubsequence(string s, string t)
    {
        if (s.length() > t.length()) return false;
        queue<char> que;
        for (char c: s)
        {
            que.push(c);
        }
        for (int i = 0; i < t.size(); i++)
        {
            if (que.front() == t[i])
            {
                que.pop();
            }
        }

        return que.empty();
    }
};
