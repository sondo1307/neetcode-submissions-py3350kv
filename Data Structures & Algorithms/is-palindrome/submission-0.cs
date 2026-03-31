public class Solution {
    public bool IsPalindrome(string s)
    {
        string temp = "";
        foreach (var VARIABLE in s)
        {
            if (char.IsLetterOrDigit(VARIABLE))
            {
                temp += char.ToLower(VARIABLE);
            }
        }

        var temp2 = new string(temp.Reverse().ToArray());
        Console.WriteLine(temp);
        Console.WriteLine(temp2);
        return temp2 == temp;
    }
}
