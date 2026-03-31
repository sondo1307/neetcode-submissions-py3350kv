public class Solution
{
    public bool IsAnagram(string s, string t)
    {
        if (s.Length != t.Length)
        {
            return false;
        }

        var dict = new Dictionary<char, int>();
        foreach (var VARIABLE in s)
        {
            dict[VARIABLE] = dict.GetValueOrDefault(VARIABLE, 0) + 1;
        }

        foreach (var VARIABLE in t)
        {
            if (!dict.ContainsKey(VARIABLE)) return false;
            dict[VARIABLE] = dict.GetValueOrDefault(VARIABLE, 0) + 1;
        }

        foreach (var VARIABLE in dict)
        {
            if (VARIABLE.Value % 2 != 0)
            {
                return false;
            }
        }

        return true;
    }
}