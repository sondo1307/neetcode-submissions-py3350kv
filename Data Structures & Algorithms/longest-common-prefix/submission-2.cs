public class Solution
{
    public string LongestCommonPrefix(string[] strs)
    {
        string s = "";
        int i = 0;
        int min = strs[0].Length;
        min = strs.Select(str => str.Length).Prepend(min).Min();

        Console.WriteLine(min);
        while (i < min)
        {
            HashSet<char> hashSet = new HashSet<char>();
            foreach (var VARIABLE in strs)
            {
                hashSet.Add(VARIABLE[i]);
            }

            if (hashSet.Count > 1)
            {
                break;
            }

            s += hashSet.Last();
            i++;
        }

        return s;
    }
}