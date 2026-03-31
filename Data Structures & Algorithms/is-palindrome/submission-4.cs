public class Solution {
    public bool IsPalindrome(string s)
    {
        string temp = "";
        foreach (var VARIABLE in s)
        {
            if (AlphaNum(VARIABLE))
            {
                temp += char.ToLower(VARIABLE);
            }
        }

        var temp2 = new string(temp.Reverse().ToArray());
        Console.WriteLine(temp);
        Console.WriteLine(temp2);
        return temp2 == temp;
    }

    public bool AlphaNum(char c) {
        return (c >= 'A' && c <= 'Z' ||
                c >= 'a' && c <= 'z' ||
                c >= '0' && c <= '9');
    }
}