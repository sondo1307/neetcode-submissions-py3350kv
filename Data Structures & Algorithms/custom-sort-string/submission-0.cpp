class Solution
{
public:
    string customSortString(string order, string s)
    {
        int arr[26] = {0};
        for (auto c : s)
        {
            arr[c - 'a']++;
        }

        string result = "";
        for (auto c : order)
        {
            while (arr[c - 'a'] > 0)
            {
                result += c;
                arr[c - 'a']--;
            }
        }
        
        for (int i = 0; i < 26; i++)
        {
            while (arr[i] > 0)
            {
                result += static_cast<char>('a' + i);
                arr[i]--;
            }
        }

        return result;
    }
};