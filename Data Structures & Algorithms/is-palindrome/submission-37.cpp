class Solution
{
public:
    bool isPalindrome(string s)
    {
        int l = 0;
        int r = s.size() - 1;
        while (l < r)
        {
            while (l < r && isalnum(s[l]) == false) l++;
            while (r > l && isalnum(s[r]) == false) r--;
            if (tolower(s[l]) != tolower(s[r]))
            {
                cout << l << static_cast<char>(tolower(s[l])) << "-" << r << static_cast<char>(tolower(s[r])) << endl;
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
};