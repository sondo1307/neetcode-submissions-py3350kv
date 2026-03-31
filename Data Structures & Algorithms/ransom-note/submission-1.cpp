class Solution
{
public:
    bool canConstruct(string ransomNote, string magazine)
    {
        int arr[26] ={0};
        for (char c : magazine)
        {
            arr[c - 'a']++;
        }
        for (char c : ransomNote)
        {
            arr[c - 'a']--;
            if (arr[c - 'a'] < 0) return false;
        }
        return true;
    }
};
