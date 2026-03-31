public class Solution {
    public bool IsPalindrome(string s)
    {
        s = s.ToLower();
        s = Regex.Replace(s, "[^a-zA-Z0-9]", "");
        Console.WriteLine(s);
        int index = 0;
        while (index < s.Length/2)
        {
            if (s[index] != s[s.Length - 1 - index])
            {
                return false;
            }
            index++;
        }

        return true;
    }
}