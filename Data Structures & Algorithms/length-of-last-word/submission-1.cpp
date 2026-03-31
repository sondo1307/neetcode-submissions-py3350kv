class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        int r = -1;
        int l = s.length() - 1;
        for (int i = s.length() - 1; i >= 0; i--)
        {
            if ((isalpha(s[i]) && i == s.length() - 1) || (isalpha(s[i]) && s[i + 1] == ' '))
            {
                r = i;
                cout << r << endl;
            }
            if (r != -1 && s[i] == ' ')
            {
                l = i + 1;
                cout << l << endl;
                break;
            }
        }

        return r - l + 1;
    }
};
