class Solution
{
public:
    bool isPalindrome(string s)
    {
        string newString = "";
        for (char &c : s)
        {
            if (std::isalnum(c))
            {
                newString += c;
            }
        }
        for (char &c : newString) {
            c = tolower((c));
        }

        for (int i = 0; i < newString.length(); ++i)
        {
            if (newString[i] != newString[newString.length() - 1 - i]) return false;
        }

        return true;
    }
};