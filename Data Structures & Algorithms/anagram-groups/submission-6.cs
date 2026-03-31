public class Solution
{
    public List<List<string>> GroupAnagrams(string[] strs)
    {
        Dictionary<string, List<string>> dict = new Dictionary<string, List<string>>();
        foreach (var s in strs)
        {
            var sArr = new int[26];
            foreach (var c in s)
            {
                sArr[c - 'a']++;
            }

            var key = string.Join(",", sArr);
            if (!dict.ContainsKey(key))
            {
                dict.Add(key, [s]);
            }
            else
            {
                dict[key].Add(s);
            }
        }

        return dict.Values.ToList();
    }
}